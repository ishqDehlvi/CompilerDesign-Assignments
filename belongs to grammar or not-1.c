// To check a string whether it belongs to a grammar or not {any string of (0,1) ending with (01)}
#include <stdio.h>
 
int belongsToGrammar(const char* inputString) {
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }
 
    if (length >= 2 && inputString[length - 2] == '0' && inputString[length - 1] == '1') {
        for (int i = 0; i < length; i++) {
            if (inputString[i] != '0' && inputString[i] != '1') {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
 
int main() {
    char inputString[100];
    printf("Enter a string to chck: ");
    scanf("%s", inputString);
 
    if (belongsToGrammar(inputString)) {
        printf("String belongs to the grammar provided.\n");
    } else {
        printf("String does not belong to the grammar provided.\n");
    }
 
    return 0;
}
