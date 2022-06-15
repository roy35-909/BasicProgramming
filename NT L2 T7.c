/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
void main()
{
    int basic_salary,dearness_allowence,house_rent,gross_salary;
    scanf("%d",&basic_salary);
    dearness_allowence = basic_salary*0.40;
    house_rent = basic_salary*0.20;
    gross_salary = basic_salary+dearness_allowence+house_rent;
    printf("Gross Salary is :  %d",gross_salary);

    getch();
}

