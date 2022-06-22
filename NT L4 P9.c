/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
int main()
{
    int cost,sell;
    scanf("%d%d",&cost,&sell);
    if(cost<sell)
        printf("He made Profit %d \n",sell-cost);
    else
        printf("He made loss %d \n",cost-sell);

    return 0;
}

