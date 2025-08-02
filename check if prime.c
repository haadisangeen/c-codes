// Check whether a number is prime or not.

#include <stdio.h>
#include <math.h>

int main() {
    int n, flag = 1; 

    printf("Enter a number to check if prime:\n");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 0; // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i <= sqrt(n); i++) { 
            if (n % i == 0) { 
                flag = 0; 
                break;
            }
        }
    }

    if (flag == 1) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

return 0;

}