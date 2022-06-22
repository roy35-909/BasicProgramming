/* Simanta kumar Roy
   221-35-909
*/

#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    switch(c)
    {
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%0.3lf\n",a/b);
        break;
    default:
        printf("Give Valid Oparator.\n");
        break;
    }
    return 0;
}

