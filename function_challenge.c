#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char voyelles[] = "aAeEiIoOuUyY";
char phrase[100];
void rmplc(char phrs[100]) {
    for (int i = 0; i < strlen(phrase); i++)
    {
        for (int j = 0; j < strlen(voyelles); j++)
        {
            if (phrase[i] == voyelles[j])
            {
                phrase[i] = ' ';
            }
            
        }
        
        
    }
    printf(" %s", phrase);
    
}
int main() {
    printf("enter the phrase you want to make changes on it : ");
    fgets(phrase, 100, stdin);
    rmplc(phrase);
    return 0;
}