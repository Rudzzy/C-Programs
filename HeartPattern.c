#include <stdio.h>
int main()
{
    int n, k;

    printf("Enter any Odd number: ");
    scanf("%d",&n);

    while (n%2 == 0) 
    {
        printf("Enter any Odd number Again(other than 1): ");
        scanf("%d",&n);
    } 
    k = (n-1)/2;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < (k-i+1); j++)
        {
            printf("  ");
        }
        for (int j = 0; j < (2*i-1); j++)
        {
            printf("* ");
        }
        for (int j = 0; j < (k-i+1); j++)
        {
            printf("  ");
        }
        for (int j = 0; j < (k-i); j++)
        {
            printf("  ");
        }
        for (int j = 0; j < (2*i-1); j++)
        {
            printf("* ");
        }
        for (int j = 0; j < (k-i); j++)
        {
            printf("  ");
        } 
        printf("\n"); 
    }
    
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j <= (2*(i-1)); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2*(n-i)+1); j++)
        {
            printf("* ");
        }
        for (int j = 1; j <= (2*i); j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    
    
    return 0;
}
//         *               *
//       * * *           * * *
//     * * * * *       * * * * *
//   * * * * * * *   * * * * * * *
// * * * * * * * * * * * * * * * * *
//   * * * * * * * * * * * * * * *
//     * * * * * * * * * * * * *
//       * * * * * * * * * * *
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *


//       *           *
//     * * *       * * *
//   * * * * *   * * * * *
// * * * * * * * * * * * * * * * * *
//   * * * * * * * * * * * * * * *
//     * * * * * * * * * * * * *
//       * * * * * * * * * * *
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *