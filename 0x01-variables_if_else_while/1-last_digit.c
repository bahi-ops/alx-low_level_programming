#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Initialize random number generator with current time

    int n = rand();

    printf("Last digit of %d is ", n % 10);

    if (n % 10 > 5) {
        printf("greater than 5\n");
    } else if (n % 10 == 0) {
        printf("0\n");
    } else {
        printf("less than 6 and not 0\n");
    }

    return 0;
}

