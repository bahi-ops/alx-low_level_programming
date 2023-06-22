#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 26)
{
_putchar(letter);
letter++;
j++;
}
letter = 'a'; // Reset letter to 'a' for the next line
_putchar('\n');
i++;
}
}