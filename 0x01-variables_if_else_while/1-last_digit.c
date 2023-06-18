#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Initialize random seed
    
    int n = rand(); // Assign a random number to variable n
    
    printf("Last digit of %d is ", n);
    
    int lastDigit = abs(n) % 10; // Get the last digit of n
    
    if (lastDigit > 5) {
        printf("%d and is greater than 5\n", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0\n", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }
    
    return 0;
}
