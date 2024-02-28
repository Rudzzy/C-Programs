#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter the Elements in Array: ");
    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Given Array is : \n");
    for(int i=0 ; i<5 ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}