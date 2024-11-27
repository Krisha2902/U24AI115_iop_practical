
#include <stdio.h>

float calculateY(int x, int n) {
    if (n == 1) {
        return 1 + x;
    } else if (n == 2) {
        return 1 + (float)x / n; 
    } else if (n == 3) {
        return 1 - x;
    } else {
        return 1 + n * x;
    }
}

int main() {
    int x, n;
    printf("Enter the values of x and n: ");
    scanf("%d %d", &x, &n);

    float result = calculateY(x, n);
    printf("The value of Y(x, n) is: %.2f\n", result);

    return 0;
}
