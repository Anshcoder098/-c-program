#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    
    if (ch >= 'A' && ch <= 'Z') {
        ch += 32;  
    }

    
    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }

    return 0;
}

