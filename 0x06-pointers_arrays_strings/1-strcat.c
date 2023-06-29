#include"main.h"
#include <stdio.h>
/**
 * main - check the code 
 *
 * Return:Always 0.
 */
char *_strncat(char *dest, const char *src, int n)
{
char *ptr = dest;
while (*ptr != '\0')
ptr++;
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}    
*ptr = '\0';
return dest;
}
