#include <stdio.h>

int lecture() {
    int number;

    printf("Please enter a number: ");
    scanf_s("%d", &number);

    if (number % 2 == 0) {
        printf("Your number is even.\n");
    }
    else {
        printf("Your number is odd.\n");
    }

    return 0;
}