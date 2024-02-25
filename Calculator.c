#include <stdio.h>

int main()
{
    float n1, n2;
    char a;

    printf("Enter the Operator(+, -, /, *): ");
    scanf("%c",&a);
    printf("Enter the First Number: ");
    scanf("%f",&n1);
    printf("Enter the Second Number: ");
    scanf("%f",&n2);
    
    switch (a)
    {
    case '+':
        printf("Addition Answer: %.3f + %.3f = %.3f",n1,n2,n1 + n2);
        break;
    case '-':
        printf("Subtraction Answer: %.3f - %.3f = %.3f",n1,n2,n1 - n2);
        break;
    case '*':
        printf("Multiplication Answer: %.3f * %.3f = %.3f",n1,n2,n1 * n2);
        break;
    case '/':
        printf("Division Answer: %.3f / %.3f = %.3f",n1,n2,n1 / n2);
        break;
    default:
        printf("Invalid Input!!");
        break;
    }
    return 0;
}