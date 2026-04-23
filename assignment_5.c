//FOP Assignment 5

#include <stdio.h>

int main() {
    int n, i, j;
    int A[10][10], B[10][10], sum[10][10];

    printf("Enter size: ");
    scanf("%d", &n);

    // Input Matrix A
    printf("Enter Matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("Enter Matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &B[i][j]);

    // ADDITION
    printf("\nAddition:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // SADDLE POINT (simple)
    int min, col, k, found = 0;
    for(i=0;i<n;i++) {
        min = A[i][0];
        col = 0;

        for(j=1;j<n;j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        for(k=0;k<n;k++) {
            if(A[k][col] > min)
                break;
        }

        if(k == n) {
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }
    if(!found) printf("\nNo Saddle Point\n");

    // INVERSE (only 2x2 simple)
    if(n == 2) {
        float det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

        if(det == 0) {
            printf("\nNo Inverse\n");
        } else {
            printf("\nInverse:\n");
            printf("%0.2f %0.2f\n", A[1][1]/det, -A[0][1]/det);
            printf("%0.2f %0.2f\n", -A[1][0]/det, A[0][0]/det);
        }
    }

    // MAGIC SQUARE (basic check)
    int sum1 = 0, temp, magic = 1;

    for(j=0;j<n;j++)
        sum1 += A[0][j];

    for(i=0;i<n;i++) {
        temp = 0;
        for(j=0;j<n;j++)
            temp += A[i][j];
        if(temp != sum1)
            magic = 0;
    }

    if(magic)
        printf("\nMagic Square\n");
    else
        printf("\nNot Magic Square\n");

    return 0;
}