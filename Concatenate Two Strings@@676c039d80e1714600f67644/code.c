#include <stdio.h>
#include <string.h>

int main() {
    int q = 0;
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if (str[n-1] == '\n') {
        str[n-1] = '\0';
        n--;
    }
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            str[q++] = str[i];
        }
    }

    str[q] = '\0';
    printf("%s", str);

    return 0;
}
