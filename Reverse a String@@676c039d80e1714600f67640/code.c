#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    
    // Reverse the string using strrev() function
    strrev(str);
    
    // Output the reversed string
    printf("Reversed string: %s\n", str);
    
    return 0;
}
