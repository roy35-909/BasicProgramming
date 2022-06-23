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
printf("\n\nFind What ? : ");
int s;
scanf("%d",&s);
for(int i=0;i<=5;i++)
{
    if(a[i]==s)
    {
        printf("Found %d in index of %d \n",s,i+1);
        break;
    }
}

    return 0;
}

