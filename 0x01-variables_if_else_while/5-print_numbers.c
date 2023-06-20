#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the last digit of a randomly generated number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
while (number < 10)
{
putchar(number + '0');
number++;
}
putchar('\n');
return (0);
}
