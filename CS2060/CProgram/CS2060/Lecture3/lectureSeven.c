#include <stdio.h>

int lectureSeven() {
	int numOfTerm = 0;
	unsigned long long int factor = 1;
	double x = 0.0, result = 0.0, power = 1.0;

	printf("%s", "Please enter the number of terms (Positive integer number): ");
	scanf_s("%d", &numOfTerm);

	if (numOfTerm <= 0) {
		puts("Invalid input.");
	}
	else {
		printf("%s", "Please, enter the value of x: ");
		scanf_s("%lf", &x);
		for (int i = 0; i <= numOfTerm - 1; i++) {
			factor *= ((i == 0) ? 1 : i);
			power *= ((i == 0) ? 1 : x);
			result += (power / factor);
		}
		printf("The estimated value of e^x is: %lf\n", result);
	}
	return 0;
}