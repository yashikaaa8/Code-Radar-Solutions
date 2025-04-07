#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char str1[100];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if (isdigit(ch) || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str1[j++] = ch;
        }
    }

    str1[j] = '\0';
    printf("%s", str1);

    return 0;
}