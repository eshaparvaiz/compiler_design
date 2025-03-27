

#include <stdio.h>
int main() {
    FILE *file = fopen("input.c", "r");
    int lines = 0;
    char ch;
    if (file) {
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '\n') lines++;
        }
        fclose(file);
    }
    printf("%d\n", lines + 1);
    return 0;
}
