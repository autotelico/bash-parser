#include <stdio.h>
#include "bash-parser.h"

int main(void) {
    char text[] = "cat amazing.txt";
    char* cmds = parseBashCommands(text, strlen(text));
    printf("%s", cmds);
    free(cmds);
    return 0;
}