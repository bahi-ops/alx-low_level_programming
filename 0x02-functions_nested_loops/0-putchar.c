#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
<<<<<<< HEAD
int main(void)
{
char str[] = "_putchar";
for (int i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return 0;
=======
int main(void) {
    char* message = "_putchar\n";
    int i = 0;

    while (message[i] != '\0') {
        putchar(message[i]);
        i++;
    }

    return 0;
>>>>>>> refs/remotes/origin/main
}
