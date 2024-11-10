#include<stdio.h>
#include<stdbool.h>
#include<string.h> // For strlen

bool isanagram(char a[100], char b[100]) {
    int i, j;
    
    // Check if lengths of the strings are different
    if (strlen(a) != strlen(b)) {
        return false;  // If lengths are different, they can't be anagrams
    }

    // Loop through each character of string a
    for(i = 0; a[i] != '\0'; i++) {
        bool found = false;
        
        // Loop through string b to find a matching character
        for(j = 0; b[j] != '\0'; j++) {
            if(a[i] == b[j]) {
                found = true;   // Mark that the character was found
                b[j] = '*';     // Mark the character in b as used
                break;
            }
        }
        
        // If the character from a was not found in b, return false
        if (!found) {
            return false;
        }
    }
    
    return true; // If all characters match, the strings are anagrams
}

int main() {
    char a[100], b[100];

    printf("Enter the first string: ");
    gets(a);  // Unsafe, but kept as requested

    printf("Enter the second string: ");
    gets(b);  // Unsafe, but kept as requested

    bool x = isanagram(a, b);  // Corrected the missing semicolon

    if(x) {
        printf("Anagram\n");
    } else {
        printf("Not anagram\n");
    }

    return 0;
}

