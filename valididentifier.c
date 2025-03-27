
#include <stdio.h>
#include <ctype.h>

int is_valid_identifier(char *str) {
    if (!isalpha(str[0]) && str[0] != '_') return 0;
    for (int i = 1; str[i]; i++)
        if (!isalnum(str[i]) && str[i] != '_') return 0;
    return 1;
}

int main() {
    char str[100];
    scanf("%s", str);
    printf("%s\n", is_valid_identifier(str) ? "Valid" : "Invalid");
    return 0;
}