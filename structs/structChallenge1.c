#include <stdio.h>
#include <string.h>
int main() {
    struct employee 
    {
        char name[20];
        int hireDate;
        float salary;
    };
    struct employee emp1 = {"Philo", 205, 30.5};
    struct employee emp2;
    char emp2Name[20];
    printf("name, hire date, and salary\n");
    scanf("%s", emp2Name);
    strcpy(emp2.name, emp2Name);
    scanf("%i", &emp2.hireDate);
    scanf("%f", &emp2.salary);
    printf("Emp1 name %s\n", emp1.name);
    printf("Emp2 name%s\n", emp2.name);
    printf("Emp1 hire date%i\n", emp1.hireDate);
    printf("Emp2 hire date%i\n", emp2.hireDate);
    printf("Emp1 salary%f\n", emp1.salary);
    printf("Emp2 salary%f\n", emp2.salary);

    return 0;
}