#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[] = "quel sinistre mot!";
int c[50];
int t = 0;
char letter;

int main() {
    for (int i = 0; i < strlen(string); i++) {
        switch (string[i]) {
            case 'm':
                printf("the letter 'm' located in the position %d\n", i);
                string[i] = 's';
                break;
            case 's':
                printf("the letter 's' located in the position %d\n", i);
                string[i] = 'm';
                break;
            default:
                break;
        }
    }
    
    printf("\n---------------------------------------------------------------\n");
    
    printf("the string after we change 'm' by 's' and vice versa become : %s\n", string);
    
    printf("\n---------------------------------------------------------------\n");
    
    printf("type a letter you want to search for in the string : ");
    scanf(" %c", &letter);
    
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == letter) {
            c[t] = i; 
            t++;
        }
    }
    
    if (t > 0) {
        for (int i = 0; i < t; i++) {
            printf("the letter %c located in the position %d\n", letter, c[i]);
        }
    } else {
        printf("there is no such letter in the string\n");
    }
    
    return 0;
}
