//FOP Assignment 12

#include <stdio.h>
#include <stdlib.h>   

// Function to find GCD using Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find Smallest Common Divisor
int smallestCommonDivisor(int a, int b) {
    int min = (a < b) ? a : b;

    for (int i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num1, num2, gcd, scd;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Handle negative inputs
    num1 = abs(num1);
    num2 = abs(num2);

    if (num1 == 0 || num2 == 0) {
        printf("\nGCD: %d\n", num1 + num2); // GCD(0, n) = n
        printf("Smallest Common Divisor: Not applicable\n");
        return 0;
    }

    // Function calls
    gcd = findGCD(num1, num2);
    scd = smallestCommonDivisor(num1, num2);

    // Output
    if (scd == -1)
        printf("\nSmallest Common Divisor (other than 1): None\n");
    else
        printf("\nSmallest Common Divisor (other than 1): %d\n", scd);

    printf("Greatest Common Divisor (GCD): %d\n", gcd);

    return 0;
}