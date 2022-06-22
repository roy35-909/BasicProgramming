#include<stdio.h>
int main()
{
    int u;
    double taka;
    scanf("%d",&u);         // Simanta Kumar Roy
    if(u<=200)              // 221-35-909
    {
        taka = u*0.5 ;
    }
    else if(u<=400)
    {
        taka = (u-200)*0.65;
        taka+=100;
    }
    else if(u<=600)
    {
        taka = (u-400)*0.80;
        taka +=230;
    }
    else if(u>600)
    {
        taka = (u-600);
        taka+=390;
    }
    printf("%0.2lf\n",taka);

    return 0;
}
