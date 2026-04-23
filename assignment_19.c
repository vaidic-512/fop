//FOP Assignment 19

#include <stdio.h>
#include <string.h>

// Structure definition
struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

int main() {
    int n, i;
    int male = 0, female = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Input
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender: ");
        scanf("%s", emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Count male and female
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].gender, "Male") == 0)
            male++;
        else if (strcmp(emp[i].gender, "Female") == 0)
            female++;
    }

    // Output
    printf("\nTotal number of employees = %d\n", n);
    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);

    // Salary > 10000
    printf("\nEmployees with salary more than 10000:\n");
    for (i = 0; i < n; i++) {
        if (emp[i].salary > 10000)
            printf("%s\n", emp[i].name);
    }

    // Designation = AsstManager
    printf("\nEmployees with designation AsstManager:\n");
    for (i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "AsstManager") == 0)
            printf("%s\n", emp[i].name);
    }

    return 0;
}