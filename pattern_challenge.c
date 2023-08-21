#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    for(int i=n-1; i>-n; i--)
    {
        for(int j=n-1; j>-n; j--)
        {
            if(abs(j)>=abs(i))
                printf("%d ", abs(j)+1);
            else if(abs(j)<abs(i))
                printf("%d ", abs(i)+1);
        }
        printf("\n");
    }
    return 0;
}