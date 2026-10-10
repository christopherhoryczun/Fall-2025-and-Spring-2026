#include <stdio.h>

int grades(void) {
	int passed = 0;
	int failed = 0;
	int student = 1;
	while (student <= 10) {
		printf("%s", "Enter results (1=passed, 2=failed): ");
		int result = 0;
		scanf_s("%d", &result);
		if (result == 1) {
			passed = passed + 1;
		}
		else {
			failed = failed + 1;
		}
		student = student + 1;
	}
	printf("passed %d\n", passed);
	printf("failed %d\n", failed);
	if (passed >= 8) {
		puts("Bonus to professors");
	}
	return 0;
}