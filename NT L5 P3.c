/* Simanta kumar Roy
   221-35-909
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0,a;
    scanf("%d",&a);
    for(int i= 0;i<5;i++)
    {
     sum+=a%10;
     a=a/10;
    }

    printf("%d",sum);
    return 0;
}

