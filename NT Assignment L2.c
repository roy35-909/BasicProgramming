/*Simanta Kumar Roy
  221-35-909
*/

#include <stdio.h>
int main()
{
    int i, j, k, N;
   N = 4;
    k = 1;

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%3d", k);
        }

        printf("\n");
    }

    return 0;
}
