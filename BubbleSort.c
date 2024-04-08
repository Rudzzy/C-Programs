#include <stdio.h>
#include "utils.h"
int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;

    //Original Array
    printf("Orignial Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");

    //Smaller to Bigger (Ascending Order)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    printf("Smaller to Bigger(Ascending Order): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    //Bigger to Smaller (Descending Order)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }printf("\n");

    printf("Bigger to Smaller(Descending Order): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}