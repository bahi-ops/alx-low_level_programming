#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // If there are remaining characters to fill in the destination string
    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
