#include <stdio.h>
/*
*This program prints the alphabet in lowercase,
*and then in uppercase, followed *by a new line.
*/
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
/* { */
putchar(lowercase);
lowercase++;
}
char uppercase = 'A';
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
