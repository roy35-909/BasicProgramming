/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
int main()
{
    int a,f,j;
    printf("Give Age input Arif / Fahmid / Joy \n");
    scanf("%d %d %d",&a,&f,&j);
    if(a<f)
    {
        if(a<j)
            printf("Arif %d\n",a);

        else
            printf("Joy %d\n",j);
    }
    else{
        if(f<j)
            printf("Fahmid %d \n",f);
        else
            printf("Joy %d\n",j);
    }
    return 0;
}

