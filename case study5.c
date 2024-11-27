#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int is_perfect_square(int x) {
    int s = (int)sqrt(x);  // Take the square root and cast it to an integer
    return s * s == x;  // Return true if the square of s is equal to x
}

// Function to check if a number is a Fibonacci number
int is_fibonacci(int W) {
    // Check if one of the two conditions is true
    return is_perfect_square(5 * W * W + 4) || is_perfect_square(5 * W * W - 4);
}

int main() {
    int W;
    printf("Enter an integer: ");
    scanf("%d", &W);

    // Check if W is a Fibonacci number
    if (is_fibonacci(W)) {
        printf("%d is a Fibonacci number.\n", W);
    } else {
        printf("%d is not a Fibonacci number.\n", W);
    }

    return 0;
}
