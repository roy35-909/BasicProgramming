/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/

#include<stdio.h>
#include<string.h>
struct Person {
  char name [50];
  char email[50];
  char phone[15];
}roy;

int main()
{

    strcpy(roy.name, "Simanta Kumar Roy");
    strcpy(roy.email,  "roy35-909@diu.edu.bd");
    strcpy(roy.phone, "01682921257");


    //printing Struct
    printf("\n Name  = %s \n Email = %s \n Phone = %s \n",roy.name,roy.email,roy.phone);

}
