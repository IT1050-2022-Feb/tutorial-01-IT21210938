/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2;
  float total,avg;

  printf("Input the mark :\n");
  scanf("%f", &mark1);
  printf("Input the mark :\n");
  scanf("%f", &mark2);

  total=mark1+mark2;
  avg=total/2;

  printf("Average marks : %.2f", avg);
  
  return 0;
}

