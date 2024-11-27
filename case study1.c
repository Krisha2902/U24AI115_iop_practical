#include <stdio.h>
#include <string.h>

void next_permutation(char *w) {
    int n = strlen(w);
    int i = n - 2;

    // Step 1: Find the rightmost character that is smaller than the next one
    while (i >= 0 && w[i] >= w[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the smallest character to the right of i that is greater than w[i]
        int j = n - 1;
        while (w[j] <= w[i]) {
            j--;
        }

        // Step 3: Swap w[i] and w[j]
        char temp = w[i];
        w[i] = w[j];
        w[j] = temp;
    }

    // Step 4: Reverse the sequence after index i
    int left = i + 1, right = n - 1;
    while (left < right) {
        char temp = w[left];
        w[left] = w[right];
        w[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char w[100];
    scanf("%s", w);

    next_permutation(w);
    printf("%s\n", w);

    return 0;
}