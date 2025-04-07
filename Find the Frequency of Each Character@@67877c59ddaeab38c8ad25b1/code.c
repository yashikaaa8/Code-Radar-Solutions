// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};  // For all ASCII characters

    fgets(str, sizeof(str), stdin);

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print frequency
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}