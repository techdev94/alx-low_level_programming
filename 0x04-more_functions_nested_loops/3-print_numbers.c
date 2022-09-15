#include "main.h"

/**
 * void print_numbers - function that prints the numbers, from 0 to 9, followed by a new line
 * @c : character to check
 * Return:0
 */

void print_numbers(void)
{
int count = 0;

for (count=0; count<=9; count++)
{
  _putchar(count);

}

_putchar("\n");


	return 0;

}
