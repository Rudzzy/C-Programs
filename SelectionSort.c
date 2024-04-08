#include <stdio.h>
#include "utils.h"
int main()
{
    int arr[5] = {4, 6, 3, 7, 2};
    int n = 5;
    int k,index;

    //Original Array
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");

    //Smaller to Bigger
    for (int i = 0; i < n-1; i++)
    {
        k = arr[i];
        for (int j = i+1 ; j < n; j++)
        {
            if (arr[j]<k)
            {
                k = arr[j];
                index = j;
            }  
        }
        swap(&arr[i],&arr[index]);
    }

    printf("Smaller to Bigger: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");

    //Bigger to Smaller
    for (int i = 0; i < n-1; i++)
    {
        k = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]>k)
            {
                k = arr[j];
                index = j;
            }  
        }
        swap(&arr[i],&arr[index]);
    }

    printf("Bigger to Smaller: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }  
    return 0;
}