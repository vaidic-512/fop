//FOP Assignment 21

#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    //1. Write data to file
    fp1 = fopen("source.txt", "w");   // open file in write mode

    printf("Enter text (press # to stop):\n");

    while((ch = getchar()) != '#') {
        fputc(ch, fp1);   // write character to file
    }

    fclose(fp1);   // close file

    //2. Copy file
    fp1 = fopen("source.txt", "r");   // open source in read mode
    fp2 = fopen("dest.txt", "w");     // open destination in write mode

    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);   // copy character
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully");

    return 0;
}