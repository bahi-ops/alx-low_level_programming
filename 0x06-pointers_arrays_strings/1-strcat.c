#include"main.h"
#include <stdio.h>
/**
 * main - check the code 
 *
 * Return:Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    i = j = 0;

    // Find the end of the destination string
    while (dest[i] != '\0')
        i++;

    // Append at most n characters from the source string to the destination string
    while (src[j] != '\0' && j < n) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Add the terminating null byte
    dest[i] = '\0';

    return dest;
}
