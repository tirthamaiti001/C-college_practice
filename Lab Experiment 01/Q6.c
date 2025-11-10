//Write a code in C language that convert a Celsius temperature to a Fahrenheit temperature.
#include<stdio.h>

int main ()
{
  float C, F;
  printf("Enter temperature (C): ");
  scanf("%f", &C);
  
  F = (C * (9.0/5.0)) + 32.0;
  printf("Temperature in Fahrenheit: %.2f\n",F);
  
  return 0;
}
