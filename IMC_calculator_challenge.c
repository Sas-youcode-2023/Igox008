#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int h[100];
double w[100];
int c = 1;
int i = 0;
int patientsNum = 0;
double IMC[100];
int hAVG = 0;  // Initialize to 0
double wAVG = 0.0;  // Initialize to 0.0

int main() {
    printf("hello, here you can calculate the IMC of multiple patients at once,\njust you need to type the height and the weight of every patient\n(Type a negative number for height to stop)\n");

    while (1) {
        printf("enter height of patient %d in cm : ", c);
        scanf("%d", &h[i]);
        if (h[i] < 0) {
            patientsNum = c - 1;
            system("cls");
            break;
        } else {
            hAVG += h[i];
            c++;
            i++;
        }
    }

    printf("you entered %d patients\n", patientsNum);

    c = 1;
    for (int i = 0; i < patientsNum; i++) {
        printf("enter weight of patient %d in kg (%d cm): ", c, h[i]);
        scanf("%lf", &w[i]);
        wAVG += w[i];
        IMC[i] = w[i] / pow(h[i] / 100.0, 2);  // Convert height to meters (cm to m)
        c++;
    }

    printf("\n---------------------------------------------------------------\n");
    if (patientsNum >= 1) {
        printf("the average height is %.2f\n", (double)hAVG / patientsNum);
        printf("the average weight is %.2f\n", wAVG / patientsNum);
    }
    printf("\n---------------------------------------------------------------\n");
    c = 1;
    for (int i = 0; i < patientsNum; i++) {
        printf("the IMC of patient %d is : %.2f", c, IMC[i]);
        if (IMC[i] < 18.5) {
            printf(" , that means 'not enough'\n");
        } else if (IMC[i] > 25) {
            printf(" , that means 'too much'\n");
        } else {
            printf(" , that means 'normal'\n");
        }
        c++;
    }

    return 0;
}
