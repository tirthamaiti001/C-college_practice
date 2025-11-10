//Write a code in C language that convert a Fahrenheit temperature to a Celsius temperature.
#include <stdio.h>

int main()
{
  float F, C;
  printf("Enter temperature (F): ");
  scanf("%f" &F)
  
  C = (F-32.0) * (5.0/9.0);
  printf("Temperature in Celsius is: %.2f\n",C);
  
  return 0;
}
