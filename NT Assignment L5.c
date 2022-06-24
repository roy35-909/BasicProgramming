#include<stdio.h>
int main(){
int i=0,j=0;
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
int sum = 0;
for(i=0;i<4;i++){
 for(j=0;j<3;j++){
  sum+=arr[i][j];
 }//end of j
}//end of i
printf("%d",sum);
return 0;
}
