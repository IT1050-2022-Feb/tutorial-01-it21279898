/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {         
   
   float module,sum=0,Avg;
   int a;
   
   for (a=0;a<3;a++)
   {
      printf("Input marks %d :",a+1);
      scanf("%f",&module);
      sum=sum+module;
   }
   
   Avg=sum/a;
   printf("the average mark of the student:%.2f",Avg);
  
  return 0;
}
