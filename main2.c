#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    FILE *file1 = fopen("./test.txt", "r");
    FILE *file2 = fopen("./test2.txt", "w");

    if (file1 == NULL) {
		printf("Cannot open file\n");
		return 1;
	}
    if (file2 == NULL) {
		printf("Cannot open file\n");
		return 1;
	}

    char c;
    while ((c = fgetc(file1)) != EOF){
        fputc(c, file2);
    }

    fclose (file1);
    fclose (file2);

    file1 = fopen("./test.txt", "w");
    if (file1 == NULL){
        printf("Cannot open file\n");
        return 1;
    }

    fclose (file1);
}