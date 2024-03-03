#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 3;
    int *cols = (int *)malloc(rows * sizeof(int));
    int **arr = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        cols[i] = 3;
        arr[i] = (int *)malloc(cols[i] * sizeof(int));
        
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = i+j;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int newRows;
    printf("Enter the Number of New Rows: ");
    scanf("%d",&newRows);
    
    for (int i = rows ; i < newRows; i++)
    {
        cols[i] = 3;
        arr[i] = (int *)malloc(cols[i] * sizeof(int));
        
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = i+j+i+j;
        }
        printf("\n");
    }
    printf("New Array : \n");
    for (int i = 0; i < newRows; i++)
    {  
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    free(arr);
    return 0;
}