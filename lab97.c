#include <stdio.h>
int vowels(char *str) {
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++; 
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int count = count_vowels(str);
    printf("Number of vowels in the string: %d\n", count);
    return 0;
}