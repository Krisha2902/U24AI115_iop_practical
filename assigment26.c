#include <stdio.h>
int main() {
    int n, sum_odd = 0, sum_even = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }    
    printf("Sum of all even numbers between 1 and %d: %d\n", n, sum_even);
    printf("Sum of all odd numbers between 1 and %d: %d\n", n, sum_odd);

    return 0;
}