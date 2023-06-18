#include <stdio.h>

int main(void)
{
    char lowercase = 'a';

    while (lowercase <= 'z')
    {
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

    return 0;
}
