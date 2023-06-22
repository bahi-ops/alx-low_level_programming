//write a funtion that computes the absolute value of an integer prototype int _abs(int);
//the standard libary provides a similar funtion abs run man abs to learn more
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The number to be computed
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
if (n < 0)
return (n * -1);
else
return (n);
}
