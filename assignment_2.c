//FOP Assignment 2

#include <stdio.h>

void main()
{
    int ch;
    float a, b;
    
    printf("1.Addition\n2.Substration\n3.Multiplication\n4.Division\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    
    if(ch==1)
    {
        printf("Addition = %.2f", a+b);
    }
    else if(ch==2)
    {
        printf("Substraction = %.2f", a-b);
    }
    else if(ch==3)
    {
        printf("Multiplication = %.2f", a*b);
    }
    else if(ch==4)
    {
        if(b != 0)
            printf("Division = %.2f", a/b);
        else
            printf("Cannot divide by zero");
    }
    else
        printf("Invalid choice");
}