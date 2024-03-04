#include <stdio.h>
int main()
{
    int n ;

    printf("Enter a Number: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < n-i; k++)
        {
            printf("* ");
        }
        printf("\n"); 
    }
    

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i+1; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}