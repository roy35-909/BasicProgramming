/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double area,s;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(a+b+c>area)
        printf("Area > Perimeter\n");
    else
        printf("Perimeter > Area\n");

    return 0;
}

