#include<stdio.h>
void main()
{
    double f,c;
    scanf("%lf",&f);
    c = ((f-32)*5)/9;
    printf("The temp is : %0.2lf Degree",c);
    getch();

}
