#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    char reversed[length + 1];  // Array to store the reversed string
    
    // Loop through the original string from end to start and copy to the new array
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    
    reversed[length] = '\0';  // Null-terminate the reversed string
    
    // Copy the reversed string back into the original string
    strcpy(str, reversed);
}

int main() {
    char str[100];
    
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline cha
