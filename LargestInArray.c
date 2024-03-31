#include <stdio.h>
int main()
{
    int arr[5] = {5,9,8,2,4};

    int largest = 0;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest number is: %d",largest);
    return 0;
}