#include <stdio.h>
/*main descripsion
*have the main access  
*/
/* This program prints the alphabet */
int main(void)
// Code to print the alphabet  
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
