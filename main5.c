#include <stdio.h>

int main() {
    FILE *file = fopen("test4.txt", "r");
    if (file == NULL) {
        printf("Error\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch != '\n' && ch != '\r') {
            fputc(ch, file);
        }
    }

    fclose(file);

    return 0;
}





