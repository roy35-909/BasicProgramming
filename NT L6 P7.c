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
for(int i=0;i<=5;i++)
{
    if(a[i]%2!=0)
    {
        printf("\n\nFound Odd number %d in index of %d \n",a[i],i+1);

    }
}

    return 0;
}
