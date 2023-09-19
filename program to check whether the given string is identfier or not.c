// Write a program to check whether the give string is identifier or not. Grammar rule:- Starting with alphabets and followed by alphanumeric char
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isAlphanumeric(char ch) {
    return isAlphabet(ch) || (ch >= '0' && ch <= '9');
}

bool isIdentifier(char *str) {
    if (!isAlphabet(str[0])) {
        return false;
    }

    int len = strlen(str);

    for (int i = 1; i < len; i++) {
        if (!isAlphanumeric(str[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    char input[50];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isIdentifier(input)) {
        printf("%s is an identifier.\n", input);
    } else {
        printf("%s is not an identifier.\n", input);
    }

    return 0;
}
