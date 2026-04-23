//FOP Assignment 10

#include <stdio.h>

void main(){
    int choice, i, n;
    float a, b, result, r;
    long fact = 1;
    
    printf("1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n 5. Power\n 6. Factorial\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
        scanf("%f%f", &a, &b);
        printf("Result = %2f", a+b);
        break;
        
        case 2:
        scanf("%f%f", &a,&b);
        printf("Result= %f", a-b);
        break;
        
        case 3:
        scanf("%f%f", &a,&b);
        printf("Result= %f", a*b);
        break;
        
        case 4:
        scanf("%f%f", &a,&b);
        if(b!= 0)
        printf("Result= %f", a/b);
        else
        printf("Error");
        break;
        
        case 5:
        scanf("%f%d", &a, &n);
        r = 1;
        for(i = 0; i < n; i++) {
        r = r * a;
        }
        printf("Result = %f", r);
        break;
        
        case 6:
        scanf("%d", &n);
        for(i=1; i<=n; i++, fact*=i);
        printf("Result= %d", fact);
        break;
        
        default:
        printf("Invalid choice");
    }
}