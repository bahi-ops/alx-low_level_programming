#include <stddef.h> // For NULL
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s) {
if (s == NULL)
return 0;
int length = 0;
while (*s != '\0') {
length++;
s++;
}
return length;
}
