#include <stdio.h>

int partition(int* arr,int l, int h)
{
  int piv = arr[l];
  int i = l, j=h;
  
  while(i<j)
  {
    while(arr[i]<=piv)
    {
      i++;
    }
    while(arr[j]>piv)
    {
      j--;
    }
    if(i<j)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp2 = arr[j];
  arr[j] = arr[l];
  arr[l] = temp2;
  return j;
}

void quicksort(int *arr ,int l, int h)
{
  if(l>=h)
  {
    return ;
  }
  int j = partition(arr,l,h);
  quicksort(arr,l,j);
  quicksort(arr,j+1,h);
}

int main()
{
  int arr[5] = {10,7,3,8,1};
  quicksort(arr,0,4);
  printf("Sorted Array: ");
  for(int i=0; i<5; i++)
  {
    printf("%d ",arr[i]);
  }
}
