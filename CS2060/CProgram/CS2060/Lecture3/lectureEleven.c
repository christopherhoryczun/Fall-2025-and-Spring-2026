//Write a C program to perform the folloiwng:
//  Stimuating the rolling of a single six - sided die 60,000,000 times.
//  Displaying the ace counts.
//  Hint : use a frequency array.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lectureEleven(void) {
    const long rolls = 60000000;  // total number of rolls
    int frequency[7] = { 0 };       // index 1–6 for die faces

    srand(time(NULL));  // seed the random number generator

    for (long i = 0; i < rolls; i++) {
        int face = (rand() % 6) + 1;  // generate a number 1–6
        frequency[face]++;             // increment the counter for that face
    }

    printf("Face\tFrequency\n");
    printf("-----------------\n");
    for (int face = 1; face <= 6; face++) {
        printf("%d\t%d\n", face, frequency[face]);
    }

    return 0;
}
