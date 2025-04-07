#include <stdio.h>

int main() {
    char str[200], str1[100]; // Ensure `str` has enough space for concatenation
    int i = 0, j = 0;

    // Read first string
    scanf(" %[^\n]", str); // Leading space ensures it ignores previous newline

    // Read second string
    scanf(" %[^\n]", str1);

    // Find the end of `str`
    while (str[i] != '\0') {
        i++;
    }

    // Append `str1` to `str`
    while (str1[j] != '\0') {
        str[i] = str1[j];
        i++;
        j++;
    }
    
    // Null terminate the concatenated string
    str[i] = '\0';

    // Print the concatenated string
    printf("%s\n", str);

    return 0;
}