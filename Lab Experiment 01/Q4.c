//Write a C program to calculate the sum, difference, product, quotient and remainder of two numbers. (*number should fit through keyboard).
#include<stdio.h>

int main()
{
  int numl, num2, a, b, c, d, e;
  printf("Enter two numbers: ");
  scanf("%d%d", &num1, &num2);
  
  a = num1 + num2;
  b = num1 - num2;
  c = num1 * num2;
  d = num1 / num2;
  e = num1 % num2;
  
  printf("Sum of two numbers = %d\n",a);
  printf("Difference of two numbers = %d\n",b);
  printf("Product of two numbers = %d\n",c);
  printf("Quotient of two numbers = %d\n",d);
  printf("Remainder of the division = %d\n",e);
  
  return 0;
}
