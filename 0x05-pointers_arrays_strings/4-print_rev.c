#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_string_reverse(const char *str)
{
if (str == NULL)
return;
int length = 0;
const char *ptr = str;
// Find the length of the string
while (*ptr != '\0') {
length++;
ptr++;
}
for (int i = length - 1; i >= 0; i--) {
printf("%c", str[i]);
}
printf("\n");
}
