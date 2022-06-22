/* Simanta kumar Roy
   221-35-909
*/
#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double ab, bc, ac, abc;
    printf("GIVE INPUT : x1/y1/x2/y2... \n");scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&x3);
    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    abc = ab+bc;

    if(abc==ac)
    {
        printf("All the three points fall on one straight line.\n");
    }
    else
        printf("All the three points are not present on one straight line.");

return 0;
}
