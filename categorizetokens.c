

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {"int", "return", "if", "else", "while", "for", "char", "float", "double", "void"};
int is_keyword(char *word) {
    for (int i = 0; i < 10; i++) if (strcmp(word, keywords[i]) == 0) return 1;
    return 0;
}

int main() {
    FILE *file = fopen("input.c", "r");
    char word[50];
    if (file) {
        while (fscanf(file, "%s", word) != EOF) {
            if (is_keyword(word)) printf("Keyword: %s\n", word);
            else if (isdigit(word[0])) printf("Constant: %s\n", word);
            else printf("Identifier: %s\n", word);
        }
        fclose(file);
    }
    return 0;
}


