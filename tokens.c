#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {"int", "if", "else", "while", "return", "char", "void"};
char *operators = "+-*/=%";

int is_keyword(char *word) {
    for (int i = 0; i < 7; i++) if (strcmp(word, keywords[i]) == 0) return 1;
    return 0;
}

int is_operator(char ch) {
    return strchr(operators, ch) != NULL;
}

int main() {
    char code[1000], *token;
    fgets(code, sizeof(code), stdin);
    token = strtok(code, " \t\n;(),{}");
    while (token) {
        if (is_keyword(token)) printf("Keyword: %s\n", token);
        else if (isdigit(token[0])) printf("Constant: %s\n", token);
        else if (is_operator(token[0])) printf("Operator: %s\n", token);
        else printf("Identifier: %s\n", token);
        token = strtok(NULL, " \t\n;(),{}");
    }
    return 0;
}