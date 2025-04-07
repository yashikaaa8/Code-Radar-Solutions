#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    char s[100];

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (isupper(ch)) {
            s[i] = tolower(ch);
        } else if (islower(ch)) {
            s[i] = toupper(ch);
        } else {
            s[i] = ch;  // Keep other characters (like spaces, punctuation) unchanged
        }
    }

    s[n] = '\0';  // Null-terminate the result
    printf("%s", s);

    return 0;
}