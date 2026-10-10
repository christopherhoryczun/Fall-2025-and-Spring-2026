#include <stdio.h>

int theFizzBuzzGame(void) {
    int upperLimit = 0;

    printf("Please, enter the upper limit of the game (Positive Integer Number): ");
    scanf_s("%d", &upperLimit);

    if (upperLimit > 0) {
        for (int i = 1; i <= upperLimit; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                printf("FizzBuzz\n");
            }
            else if (i % 3 == 0) {
                printf("Fizz\n");
            }
            else if (i % 5 == 0) {
                printf("Buzz\n");
            }
            else {
                printf("%d\n", i);
            }
        }
    }
    else {
        puts("Invalid Input");
    }

    return 0;
}