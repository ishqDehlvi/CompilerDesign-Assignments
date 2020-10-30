// Write a program in C, input strings from user and count number of words ,char,lines
#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("Enter a string :\n");

    int charCount = 0, wordCount = 0, lineCount = 0;
    while (fgets(input, sizeof(input), stdin) != NULL) {
        lineCount++;

        charCount += strlen(input);

        char *token = strtok(input, " \t\n");
        while (token != NULL) {
            wordCount++;
            token = strtok(NULL, " \t\n");
        }
    }

    printf("Character count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);

    return 0;
}
