//Simanta Kumar Roy
//221-35-909
#include<stdio.h>
void main()
{
    int a,b,t;
    scanf("%d %d",&a,&b);
    t = a;
    a = b;
    b = t;
    printf("%d %d",a,b);
    getch();
}
