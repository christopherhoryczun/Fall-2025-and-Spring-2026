// exercise_7_24.c
#include <stdio.h>

#define STUDENTS 3
#define EXAMS 4

// function prototypes
void displayChoices();
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);
void minimum(const int grades[][EXAMS], size_t pupils, size_t tests);
void maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
void average(const int grades[][EXAMS], size_t pupils, size_t tests);

// function main begins program execution
int main(void) {
	int choice = 0;

	// initialize student grades for three students (rows)
	int studentGrades[STUDENTS][EXAMS] =
	{ {77, 68, 86, 73},
	{96, 87, 89, 78},
	{70, 90, 86, 81} };

	void (*functions[4])(const int[][EXAMS], size_t, size_t) =
	{ printArray, minimum, maximum, average };
	displayChoices();
	scanf_s("%d", &choice);

	// process user
	while (choice >= 0 && choice < 4) {
		// invoke function at location choice in array f and pass
		// choice as an argument

		(*functions[choice])(studentGrades, STUDENTS, EXAMS);
		puts("");
		displayChoices();
		scanf_s("%d", &choice);

	} // end while loop

} // end main function

// Display choices for the user
void displayChoices() {
	puts("Enter a choice:");
	puts(" 0 Print the array of grades");
	puts(" 1 Find the minimum grade");
	puts(" 2 Find the maximum grade");
	puts(" 3 Print the average on all tests for each student");
	puts(" 4 End program");
}

// Print the array
void printArray(const int grades[][EXAMS], size_t pupils, size_t
	tests) {
	// output column heads
	printf("%s\n", " [0] [1] [2] [3]");
	// output grades in tabular format
	for (size_t row = 0; row < pupils; ++row) {
		// output label for row
		printf("studentGrades[%zu] ", row);
		// output grades for one student
		for (size_t column = 0; column < tests; ++column) {
			printf("%-5d", grades[row][column]);
		} // end inner for loop
		puts("");
	} // end outer for loop
} // end printArray function

// Find the minimum grade
void minimum(const int grades[][EXAMS], size_t pupils, size_t
	tests) {
	int lowGrade = 100; // initialize to highest possible grade
	// loop through rows of grades
	for (size_t row = 0; row < pupils; ++row) {
		// loop through columns of grades
		for (size_t column = 0; column < tests; ++column) {
			if (grades[row][column] < lowGrade) {
				lowGrade = grades[row][column];
			} // end if statement
		} // end inner for loop
	} // end outer for loop
	printf("The lowest grade is: %d\n", lowGrade);
} // end minimum function

// Find the maximum grade
void maximum(const int grades[][EXAMS], size_t pupils, size_t
	tests) {
	int highGrade = 0; // initialize to lowest possible grade
	// loop through rows of grades
	for (size_t row = 0; row < pupils; ++row) {
		// loop through columns of grades
		for (size_t column = 0; column < tests; ++column) {
			if (grades[row][column] > highGrade) {
				highGrade = grades[row][column];
			} // end if statement
		} // end inner for loop
	} // end outer for loop
	printf("The highest grade is: %d\n", highGrade);
} // end maximum function


// Determine the average grade for each student
void average(const int grades[][EXAMS], size_t pupils, size_t tests) {
	//loop through rows of grades
	for (size_t row = 0; row < pupils; ++row) {
		int total = 0; // sum of test grades
		// loop through columns of grades
		for (size_t column = 0; column < tests; ++column) {
			total += grades[row][column];
		}
		printf("The average grade for student %zu is %.2f\n",
			row, (double)total / tests);
	}
} // end average function