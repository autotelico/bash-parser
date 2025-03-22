#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define true 1
#define false 0

int isPalindrome(char* text) {
    int textSize = strlen(text);
    char* invertedText = (char*)malloc(textSize + 1);
    if (invertedText == NULL) {
        return false;
    }
    invertedText[textSize] = '\0';
    for (int i = 0; text[i] != '\0'; i++) {
        invertedText[textSize - i - 1] = text[i];
        printf("invertedText char: %c\n", invertedText[textSize - i - 1]);
    }
    printf("Final invertedText: %s\n", invertedText);
    int result = strcmp(text, invertedText);
    free(invertedText);
    return result;
}

int main() {
    int i = 97;
    printf("%c", i);
    return 0;
}