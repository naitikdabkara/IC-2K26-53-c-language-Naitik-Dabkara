#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
    char dept[20];
};

int main()
{
    struct Employee e[3] = {
        {101, "Naitik", 55000.50, "IT"},
        {102, "Amit", 60000.00, "HR"},
        {103, "Priya", 58000.75, "Finance"}
    };
    
    int i;
    printf("--- Employee Records ---\n");
    
    for(i = 0; i < 3; i++)
    {
        printf("\nID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nDept: %s", e[i].dept);
        printf("\nSalary: %.2f\n", e[i].salary);
        printf("--------------------");
    }
    
    return 0;
}
