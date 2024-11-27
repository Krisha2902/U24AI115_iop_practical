#include  <stdio.h> 

int main() {
    int n = 5;

    for (int i = 0; i  <  n; i++) {
        // Print spaces
        for (int j = 0; j  <  n - i; j++) {
            printf(" ");
        }

        // Print ascending numbers
        for (int k = 0; k  <= i; k++) {
            printf("%d", k + 1);
        }

        // Print descending numbers
        for (int l = i - 1; l  >= 0; l--) {
            printf("%d", l + 1);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}