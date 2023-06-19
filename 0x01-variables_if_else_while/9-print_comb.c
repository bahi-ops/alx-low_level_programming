#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar(number + 48);
if (number != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
