/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float p = (a+b+c+d+e)/5.0;
    if(p>=90)
        printf("A");
    else if(p>=80)
        printf("B");
    else if(p>=70)
        printf("C");
    else if(p>=60)
        printf("D");
    else if(p<40)
        printf("F");
    return 0;
}

