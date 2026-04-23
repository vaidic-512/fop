//FOP Assignment 6

//Factorial using Iteration (Non-Recursive)

#include <stdio.h>

int factorial_iterative(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial (Iterative) = %d\n", factorial_iterative(n));
    }

    return 0;
}

//Factorial using Recursion

#include <stdio.h>

int factorial_recursive(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial (Recursive) = %d\n", factorial_recursive(n));
    }

    return 0;
}