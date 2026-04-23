//FOP Assignment 20

#include <stdio.h>

// Function without pointers (Call by Value)
void swapValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping without pointers:\n");
    printf("a = %d  b = %d\n", a, b);
}

// Function with pointers (Call by Reference)
void swapPointer(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call by Value
    swapValue(a, b);

    // Call by Reference
    swapPointer(&a, &b);

    printf("After swapping with pointers:\n");
    printf("x = %d  y = %d\n", a, b);

    return 0;
}