#include <stdio.h>

int static four() {
    int n, i, odd_number, sum = 0;

    printf("Enter the number of odd natural numbers to display: ");
    scanf_s("%d", &n);

    printf("The first %d odd natural numbers are: ", n);
    for (i = 0; i < n; i++) {
        odd_number = 2 * i + 1;
        printf("%d ", odd_number);
        sum += odd_number;
    }//end of for loop

    printf("\nThe sum of the first %d odd natural numbers is: %d\n", n, sum);

    return 0;
}//end of four