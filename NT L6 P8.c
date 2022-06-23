/* Simanta kumar Roy
   221-35-909
*/
#include<stdio.h>
int main()
{
    int a[5] = {5,4,3,2,1};
    printf("The Array is : \n");
    for(int i=0;i<5;i++)
        printf("%d, ",a[i]);
int sum=0;
for(int i=0;i<=5;i++)
{
    if(a[i]%2==0)
        sum+=a[i];

}
printf("\n\n The sum of Even number is %d\n\n",sum);

    return 0;
}

