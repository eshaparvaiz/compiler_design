#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("input.c", "r");
    int lines = 0;
    char line[1000];
    if (file) {
        while (fgets(line, sizeof(line), file)) {
            if (strspn(line, " \t\r\n") != strlen(line)) lines++;
        }
        fclose(file);
    }
    printf("%d\n", lines);
    return 0;
}