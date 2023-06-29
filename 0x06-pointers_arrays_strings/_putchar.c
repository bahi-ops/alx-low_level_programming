#include <unistd.h>
/**
*_putchar - writes the charcter c to stout 
*@c0: the charcter to print 
*
*return : On success 1.
*On error  
*
*/
int _putchar(char c)
{
   return(write (1, &c, 1);
}
