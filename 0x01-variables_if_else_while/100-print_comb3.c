#include <stdio.h>

int main(void)
{
    int tensDigit;
    int onesDigit;

    for (tensDigit = 0; tensDigit <= 8; tensDigit++)
    {
        for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
        {
            putchar(tensDigit + 48);
            putchar(onesDigit + 48);

            if (tensDigit != 8 || onesDigit != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
