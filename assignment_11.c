//FOP Assignment 11

#include <stdio.h>
#include <math.h>

int main(){
    int n, choice,i;
    long fact = 1;
    
    printf("Enter Number: ");
    scanf("%d", &n);
    
    printf("\n1. Square Root\n2. Square\n3. Cube\n4. Prime\n5. Factorial\n6. Prime Factors\n");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    
    switch(choice){
        
        case 1:
        if(n>=0)
        printf("Square Root = %2f", sqrt(n));
        else
        printf("Not defined for negative number");
        break;
        
        case 2:
        printf("Square = %d", n*n);
        break;
        
        case 3:
        printf("Cube = %d", n*n*n);
        break;
        
        case 4:
        if (n<=1){
            printf("Not Prime");
            break;
        }
        for (i=2; i<=n/2; i++)
        if(n%1 == 0){
            printf("Not Prime");
            return 0;
        }
        printf("Prime");
        break;
        
        case 5:
        for (i=1; i<=n; i++);
        fact = fact*i;
        printf("Factorial= %d", fact);
        break;
        
        case 6:
        printf("Prime Factors: ");
        for(i=2; i<=n; i++){
            while(n%i == 0){
                printf("%d", i);
                n= n/i;
            }
        }
        break;
        
        default:
        printf("Invalid choice");
    }
    return 0;
}