#include <stdio.h>

int lectureFive(void) {
    int line = 0;
    printf("Please, enter the number of lines: ");
    scanf_s("%d", &line);

    if (line <= 0) {
        puts("Invalid Number");
    }
    else {
        for (int i = 1; i <= line; i++) {          // rows
            for (int j = 1; j <= line - i; j++) { // spaces before stars
                printf(" ");
            }
            for (int j = 1; j <= i; j++) {        // stars
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
