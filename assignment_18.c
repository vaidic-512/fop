//FOP Assignment 18

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, len;

    // Input
    printf("Enter main string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // 1. Length
    len = strlen(str1);
    printf("\nLength of string = %d\n", len);

    // 2. Reverse
    for(i = 0; i < len; i++) {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // 3. Palindrome
    if(strcmp(str1, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // 4. Equality
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 5. Substring
    if(strstr(str1, str2) != NULL)
        printf("Substring found\n");
    else
        printf("Substring not found\n");

    return 0;
}