#include "main.h"
/**
 * print_alphabet 10x
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char alphabet;
int count = 0;

for(count=0; count<10; count++)
{

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
}
_putchar('\n');

}
