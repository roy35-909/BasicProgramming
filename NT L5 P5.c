/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
int main()
{
    int n;
    long long int f=1;
    scanf("%d",&n);
    while(n>1)
    {
        f = f*n;
        n--;
    }
    printf("%lli",f);

    return 0;
}

