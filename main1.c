#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE *file = fopen("./test.txt", "r");

    if (file == NULL){
        printf("Error\n");
        return 1;
    }

    char c;
    int lines = 0;
    while ((c = fgetc(file)) != EOF){
        if(c == '\n') {
            lines++;
        }
    }

    fclose(file);
    printf("Kol-vo strok: %d\n", lines);

    return 0;
}