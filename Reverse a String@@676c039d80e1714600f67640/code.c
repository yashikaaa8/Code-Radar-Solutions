#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at 'start' and 'end'
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively reverse the substring
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    
    // Find the length of the string
    int length = strlen(str);
    
    // Reverse the string using recursion
    reverseString(str, 0, length - 1);
    
    // Output the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}
