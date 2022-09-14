#include "main.h"
#include <stdio.h>

/**
 * main -check code
 * int print_sign(int n)- function that prints the sign of a number
 *@c: The int to print
 * Return: Always 0.
 */

int print_sign(int n)
{
if (n >0)
{
return (1);
printf("+");
}
else if(n==0)
{
return (0);
printf("0");
}
else
{
return (-1);
printf("-1");
}
  
  return 0;
}
