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

    int newCols;
    printf("Enter the Number of New Columns: ");
    scanf("%d",&newCols);
    cols = (int*)realloc(cols,newCols * sizeof(int));
    for (int i = 0 ; i < rows; i++)
    {
        cols[i] = newCols;
        arr[i] = (int *)malloc(cols[i] * sizeof(int));
        
        for (int j = 0; j < newCols; j++)
        {
            arr[i][j] = i+j+i+j;
        }
    }
    printf("New Array : \n");
    for (int i = 0; i < rows; i++)
    {  
        for (int j = 0; j < newCols; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    free(arr);
    return 0;
}