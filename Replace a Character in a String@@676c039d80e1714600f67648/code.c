#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);  // No '&' needed for strings

    int n = strlen(str);
    char w, r;

    scanf(" %c", &w);  // Note the space before %c to skip newline
    scanf(" %c", &r);

    char str1[100];

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (ch == w) {
            str1[i] = r;
        } else {
            str1[i] = ch;
        }
    }
    str1[n] = '\0';  // Null-terminate the new string

    printf("%s\n", str1);

    return 0;
}