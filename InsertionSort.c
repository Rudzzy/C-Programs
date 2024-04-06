#include <stdio.h>
#include "utils.h"

int main()
{
    int arr[6] = { 5, 8, 3, 10, 1, 4};
    int n = 6;

    //Smaller to Bigger
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }            
        }
        
    }
    printf("Smaller to Bigger : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }printf("\n");

    //Bigger to Smaller
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }            
        }
        
    }
    printf("Bigger to Smaller : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ",arr[i]);
    }
    
    return 0;
}