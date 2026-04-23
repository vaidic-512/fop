//FOP Assignment 3

// for loop

#include <stdio.h>

void main()
{
    int n, i;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("Multiplication Table of %d:\n", n);
    
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", n,i, n*i);
    }
}

// while loop

#include <stdio.h>

void main()
{
    int n, i=1;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    while(i<=10)
    {
        printf("%d x %d = %d\n", n,i, n*i);
        i++;
    }
}

// do-while loop

#include <stdio.h>

void main()
{
    int n, i=1;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    do
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    while(i <= 10);
}