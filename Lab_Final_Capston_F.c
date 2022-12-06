/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/


#include<stdio.h>

void buble_sort()
    {
        int s;
        printf("Enter Array size : ");
        scanf("%d",&s);
        int arr [s];
        for(int i=0;i<s;i++)
        {
            printf("Index [%d] = ",i);
            scanf("%d",&arr[i]);
        }
        printf("\n");

        //printing array
        printf("\n\n The Orginial Array Is:  \n\n");
        for(int i=0;i<s;i++)
            printf("[%d] = %d\n",i,arr[i]);
     //Buble sort algorithm
    for (int c = 0 ; c < s - 1; c++)
        {
            for (int d = 0 ; d < s - c - 1; d++)
                {
                    if (arr[d] > arr[d+1])
                        {
                            int swap       = arr[d];
                            arr[d]   = arr[d+1];
                            arr[d+1] = swap;
                        }
                }
        }


     // buble sort Done.
     printf("\n\n The Sorted Array Is:  \n\n");
            for(int i=0;i<s;i++)
            printf("[%d] = %d\n",i,arr[i]);

    }


void leap_year()
{
       int year;
   printf("Enter a year: ");
   scanf("%d", &year);


   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is not a leap year.", year);
   }
}

//recursion Function
int fact(int val)
{
    if(val==1)
        return 1;
    return val*fact(val-1);
}
void recursion()
{
    int val;
    printf("\nEnter a Num for find out Factorial using recursion  : ");
    scanf("%d",&val);
    int ans = fact(val);
    printf("\nThe Factorial of %d is %d\n",val,ans);
}

void fibonacci()
{
    int i, n;


  int t1 = 0, t2 = 1;


  int nextTerm = t1 + t2;


  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);


  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

}


int main()
{
    while(1)
    {
        int choice;
         printf("\n 1) Buble Sort \n 2) Leap Year \n 3) Fibonacci \n 4) Recursion \n Give Any Char For exit..\n");
            if(!scanf("%d",&choice))
                break;
        switch(choice){
        case 1:
            {
               buble_sort();
               break;
            }

        case 2:
            {
              leap_year();
              break;
            }

        case 3:
            {
                fibonacci();
                break;
            }

        case 4:
            {
               recursion();
               break;
            }


        }
    }

}
