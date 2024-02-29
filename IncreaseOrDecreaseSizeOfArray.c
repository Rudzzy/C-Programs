#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n = 5;

    arr = (int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        arr[i] = i*i ;
    }
    printf("Initial Size of Array: %d",n);
    printf("\nArray = [ ");
    for(int i = 0 ; i < n; i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("]");

    printf("\nEnter the new size of Array: ");
    scanf("%d",&n);

    arr = (int*)realloc(arr,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = i*i ;
    }

    printf("Array = [ ");
    for(int i = 0 ; i < n; i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("]");
    printf("\nFinal Size of Array: %d",n);
    return 0;
}