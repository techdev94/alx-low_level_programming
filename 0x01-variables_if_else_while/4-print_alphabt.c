#include <stdio.h>
/**
 * main - Entry point
 * Print alpahbet characters but moit q and e
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}
