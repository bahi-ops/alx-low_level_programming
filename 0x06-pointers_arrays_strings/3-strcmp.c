#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *s1, char *s2)
{
int i;
for (i = 0;s1 [i]  != '\0'; && s2[i] != '\0' i++)
{
if (s1[i] != s2	[i])
return s1[i] - s2[i];
}
if (s1[i] == '\0' && s2[i] != '\0')
return -s2[i];
else if (s1[i] != '\0' && s2[i] == '\0')       
return s1[i];
return 0;
}
