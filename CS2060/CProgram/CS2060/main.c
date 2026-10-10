#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = num1;   // Store the value of num1 in temp
    num1 = num2;   // Assign the value of num2 to num1
    num2 = temp;   // Assign the value of temp (original num1) to num2

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
    }
