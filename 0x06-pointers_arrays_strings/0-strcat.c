#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, const char *src);

int main() {
   char dest[50] = "Hello";
   const char *src = " World";

   _strcat(dest, src);

   char *ptr = dest;
   while (*ptr != '\0') {
      putchar(*ptr);
      ptr++;
   }

   putchar('\n');

   return 0;
}

char *_strcat(char *dest, const char *src) {
   char *ptr = dest;

   while (*ptr != '\0') {
      ptr++;
   }

   while (*src != '\0') {
      *ptr = *src;
      ptr++;
      src++;
   }

   *ptr = '\0';

   return dest;
}