#include<stdio.h>
#include<math.h>
int main(){
  float a,b,c,d,root1,root2;
  scanf("%f%f%f",&a,&b,&c);
  d = b * b - 4 * a * c;
if(d<0)
    return 0;
  if(d==0){
   root1 = -b /(2* a);
   printf("Both roots are equal : %.3f ",root1);
   return 0;
  }
  else{
   root1 = ( -b + sqrt(d)) / (2* a);
   root2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",root1,root2);
  }

  return 0;
}
