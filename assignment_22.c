//FOP Assignment 22

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    printf("1.Length 2.Copy 3.Concat 4.Compare\n");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Length = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied string = %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated = %s", str1);
            break;

        case 4:
            if(strcmp(str1,str2)==0)
                printf("Equal");
            else
                printf("Not Equal");
            break;
    }

    return 0;
}