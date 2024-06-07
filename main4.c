#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char line[1024];
    char longestLine[1024];
    int maxLength = 0;

    file = fopen("test.txt", "r");
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    longestLine[0] = '\0';

    while (fgets(line, sizeof(line), file)) {
        int length = strlen(line);

        if (length > maxLength) {
            maxLength = length;
            strcpy(longestLine, line);
        }
    }

    fclose(file);

    printf("Samaya dlinnaya stroka:\n%s", longestLine);
    printf("Dlinna samoy dlinnoy: %d simvolov\n", maxLength);

    return 0;
}
