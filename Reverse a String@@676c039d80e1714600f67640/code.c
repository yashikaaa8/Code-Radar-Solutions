#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    // Swap characters from the beginning and end
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    
    // Reverse the string
    reverseString(str);
    
    // Output the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}

