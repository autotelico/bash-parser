#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* parseBashCommands(char text[], int textSize) {
    char* bashCommands = (char*) malloc(textSize + 1);
    char* token = strtok(text, " ");
    int counter = 0;
    while (token != NULL) {
        strcpy(&bashCommands[counter], token);
        counter += strlen(token);
        bashCommands[counter] = ' ';
        counter++;
        token = strtok(NULL, " ");
    }
    bashCommands[counter] = '\0';

    return bashCommands;
}

int main(void) {
    char bashCommand[] = "ls programming/";
    char* parsedCmd = parseBashCommands(bashCommand, sizeof(bashCommand));
    printf("%s", parsedCmd);
    free(parsedCmd);

    return 0;
}