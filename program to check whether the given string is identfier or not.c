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
    int state = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        switch (state) {
            case 0:
                if (isAlphabet(ch))
                    state = 1;
                else
                    return false;
                break;

            case 1:
                if (isAlphanumeric(ch))
                    state = 1;
                else
                    return false;
                break;
        }
    }

    return state == 1;
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

