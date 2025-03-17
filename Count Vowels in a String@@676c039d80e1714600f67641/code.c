// Your code here...
#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower() function

int countVowels(char str[]) {
    int count = 0;
    
    // Loop through each character of the string
    for (int i = 0; i < strlen(str); i++) {
        // Convert character to lowercase to handle both cases
        char ch = tolower(str[i]);
        
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    
    // Count vowels in the string
    int vowelCount = countVowels(str);
    
    // Output the number of vowels
    printf("Number of vowels in the string: %d\n", vowelCount);
    
    return 0;
}
