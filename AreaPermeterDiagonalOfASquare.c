#include <stdio.h>
#include <math.h>

int main()
{
    int s;
    float diag;

    printf("Enter Length of The Given Square: ");
    scanf("%d",&s);

    printf("Perimeter of Square is: %d\n",4*s);
    printf("Area of Square is: %d\n",s*s);

    diag = sqrt(2*s*s);

    printf("Length of Diagonal of Square is: %.3f",diag);
    
    return 0;
}