#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int num, i, isPrime = 1;
 
    // Input the number from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Special case: numbers less than 2 are not prime
    if (num < 2) {
        isPrime = 0;
    } else {
        // Loop to check divisibility
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                printf("it is not a prime"); // num is divisible by i, hence not prime
                break;
            }
            
        }
    }

   
}
