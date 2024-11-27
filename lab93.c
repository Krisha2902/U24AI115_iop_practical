#include <stdio.h>
#include <ctype.h>

int count_words(char *str) {
    int count = 0;
    char *ptr = str;

    while (*ptr != '\0') {
        // Skip leading spaces
        while (isspace(*ptr)) {
            ptr++;
        }

        // Check if we've reached the end of the string
        if (*ptr == '\0') {
            break;
        }

        // Increment word count
        count++;

        // Move to the next word
        while (!isspace(*ptr) && *ptr != '\0') {
            ptr++;
        }
    }

    return count;
}

int main() {
    char str[] = "Hello World, this is a test string.";
    int word_count = count_words(str);

    printf("Number of words: %d\n", word_count);

    return 0;
}