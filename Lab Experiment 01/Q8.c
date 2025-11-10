//Write a code in C language to swap two numbers without using third variable.
#include <stdio.h>

int main ()
{
  int num1, num2;
  
  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  
  printf ("Before swapping first number is: %d\n", num1);
  printf ("Before swapping second number is: %d\n", num2);
  
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  
  printf("After swapping first number is: %d\n", num1);
  printf("After swapping second number is: %d\n", num2);
  
  return 0;
}
