/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    if(y%4==0){
        if(y%400==0 || y%100!=0){
            printf("leap year !");
        }
        else
            printf("Not a leap year !");
    }
    else
        printf("Not a leap year !");

    return 0;
}

