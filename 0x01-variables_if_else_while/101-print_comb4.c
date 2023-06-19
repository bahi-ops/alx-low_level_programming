#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
int hundredsDigit;
int tensDigit;
int onesDigit;
for (hundredsDigit = 0; hundredsDigit <= 7; hundredsDigit++)
{
for (tensDigit = hundredsDigit + 1; tensDigit <= 8; tensDigit++)
{
for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
{
putchar(hundredsDigit + 48);
putchar(tensDigit + 48);
putchar(onesDigit + 48);
if (hundredsDigit != 7 || tensDigit != 8 || onesDigit != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
