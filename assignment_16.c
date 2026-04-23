//FOP Assignment 16

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int e = 0, o = 0;

    printf("Enter integers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Partition into even and odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    // Display even numbers
    printf("Even numbers are: ");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\nOdd numbers are: ");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}