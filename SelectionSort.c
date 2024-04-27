#include <stdio.h>

void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    int k,index;

    //Original Array
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");

    //Smaller to Bigger (Ascending Order)
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

    printf("Smaller to Bigger (Ascending Order): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");

    //Bigger to Smaller (Descending Order)
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

    printf("Bigger to Smaller (Descending Order): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }  
    return 0;
}
