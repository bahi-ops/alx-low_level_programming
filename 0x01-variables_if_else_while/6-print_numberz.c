#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)/*we main takes a value then it gets it back*/
{
int number = 0;
while (number < 10)
{
putchar(number + 48);
number++;
}
putchar('\n');
return (0);
}
