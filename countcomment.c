
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("input.c", "r");
    int count = 0, in_comment = 0;
    char line[1000];
    if (file) {
        while (fgets(line, sizeof(line), file)) {
            if (strstr(line, "//")) count++;
            if (strstr(line, "/*")) in_comment = 1;
            if (in_comment) count++;
            if (strstr(line, "*/")) in_comment = 0;
        }
        fclose(file);
    }
    printf("%d\n", count);
    return 0;
}
