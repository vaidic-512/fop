//FOP Assignment 17

#include <stdio.h>

int main() {
    float x, sum = 0, term;
    int n, i, j;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        term = 1;

        for(j=1;j<=2*i+1;j++)
            term *= x;

        int fact = 1;
        for(j=1;j<=2*i+1;j++)
            fact *= j;

        if(i%2==0)
            sum += term/fact;
        else
            sum -= term/fact;
    }

    printf("Sum = %f", sum);

    return 0;
}