#include <stdio.h>
#include <stdlib.h>

int notes[80];
int total;
double average;
int numberOfNotes;

int Lowest(int notes[], int numberOfNotes) {
    int lowestScore = notes[0];
    for (int i = 1; i < numberOfNotes; i++) {
        if (notes[i] < lowestScore) {
            lowestScore = notes[i];
        }
    }
    return lowestScore;
}

int Largest(int notes[], int numberOfNotes) {
    int largestScore = notes[0];
    for (int i = 1; i < numberOfNotes; i++) {
        if (notes[i] > largestScore) {
            largestScore = notes[i];
        }
    }
    return largestScore;
}

int main() {
    printf("Enter notes (between 0 and 20), a value outside this range will stop the entry\n");

    int i = 0;
    while (1) {
        printf("To stop, enter a value outside the range\n");
        printf("Enter the note: ");
        scanf("%d", &notes[i]);

        if (notes[i] < 0 || notes[i] > 20) {
            break;
        } else if (notes[i] == 0) {
            printf("Error: You entered number 0\n");
            continue;
        }
        i++;
        numberOfNotes++;
    }
    system("cls");
    printf("---------------------------------------------------------------------");
    printf("\nYou entered %d notes\n", numberOfNotes);

    for (int j = 0; j < numberOfNotes; j++) {
        total += notes[j];
    }
    average = (double) total / numberOfNotes;
    printf("The Average note is: %.2f\n", average);

    for (int m = 0; m < numberOfNotes; m++) {
        if (notes[m] > average) {
            printf("%d is above the average\n", notes[m]);
        } else if (notes[m] < average) {
            printf("%d is lower than average\n", notes[m]);
        } else if (notes[m] == average) {
            printf("%d is equal to the average\n", notes[m]);
        }
    }

    int aboveAverage = 0;
    for (int l = 0; l < numberOfNotes; l++) {
        if (notes[l] > average) {
            aboveAverage++;
        }
    }
    printf("%d are above the average\n", aboveAverage);

    int lowestScore = Lowest(notes, numberOfNotes);
    printf("Lowest score: %d\n", lowestScore);

    int largestScore = Largest(notes, numberOfNotes);
    printf("Largest score: %d\n", largestScore);

    return 0;
}
