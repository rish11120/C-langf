#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Output the factorial
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}
