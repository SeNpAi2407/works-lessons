#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *file3;
    int num1, num2, sum;

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error 1\n");
        return 1;
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error 2\n");
        fclose(file1);
        return 1;
    }

    fscanf(file1, "%d", &num1);
    fscanf(file2, "%d", &num2);

    fclose(file1);
    fclose(file2);

    sum = num1 + num2;

    file3 = fopen("file3.txt", "w");
    if (file3 == NULL) {
        printf("Error 3\n");
        return 1;
    }
    fprintf(file3, "%d", sum);
    fclose(file3);

    return 0;
}
