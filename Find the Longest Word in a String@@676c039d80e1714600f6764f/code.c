#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    fgets(str1, sizeof(str1), stdin);

    // Remove newline if present
    str1[strcspn(str1, "\n")] = '\0';

    int n = strlen(str1);
    char str2[100];  // To store longest word
    int c = 0, max = 0, y = 0, start = 0, maxStart = 0;

    for (int i = 0; i <= n; i++) {
        if (str1[i] == ' ' || str1[i] == '\0') {
            if (c > max) {
                max = c;
                maxStart = start;
            }
            c = 0;
            start = i + 1;
        } else {
            c++;
        }
    }

    // Copy the longest word to str2
    for (int i = 0; i < max; i++) {
        str2[i] = str1[maxStart + i];
    }
    str2[max] = '\0';  // Null-terminate the string

    printf("%s\n", str2);
    return 0;
}