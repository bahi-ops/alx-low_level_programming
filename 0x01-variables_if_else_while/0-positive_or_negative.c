#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
        if (n > 0){
             printf("is postive\n");
	    
	}else if (n == 0) {
		printf("is zero\n");
             
	}else{
              printf("is negative \n");i
	}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
