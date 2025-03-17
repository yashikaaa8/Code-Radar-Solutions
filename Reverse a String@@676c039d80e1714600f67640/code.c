#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);  // Find the length of the string
    
    // Use strcpy to copy characters from str to reversed in reverse order
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    
    reversed[length] = '\0';  // Null-terminate the reversed string
    
    // Output the reversed string
    printf(" %s\n", reversed);
    
    return 0;
}
