// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    char temp[100];
    char ans[100] = "";
    
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';  // Remove newline

    int min = 100; // large initial value
    int count = 0;

    for (int i = 0; i <= strlen(line); i++) {
        if (line[i] == ' ' || line[i] == '\0') {
            if (count != 0) {
                temp[count] = '\0'; // null-terminate the word
                if (count < min) {
                    min = count;
                    strcpy(ans, temp); // copy the shortest word
                }
                count = 0; // reset for next word
            }
        } else {
            temp[count++] = line[i];
        }
    }

    printf("%s", ans);
    return 0;
}