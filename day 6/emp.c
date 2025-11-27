#include<stdio.h>

struct Employee
{
    char name[20];
    int id;
    float salary;
};

int main(void)
{
    struct Employee emp[3];
    int i;

    printf("Enter data for 3 employess (name id salary): \n");

    for (i = 0; i < 3; i++)
    {
        printf("Employee %d:" , i);
        scanf("%s %d %f",
        emp [i]. name,
        &emp[i].id,
        &emp[i].salary);
    }

    int topIndex = 0;

    for(i = 1; i < 3; i++)
    {
        if(emp[i].salary > emp[topIndex].salary)
        {
            topIndex = i; 

        }
    }
    struct Employee *pTop =&emp[topIndex];

    printf("\nEmployee with highest salary:\n");
    printf("Name =%s\n", pTop->name);
    printf("ID = %d\n", pTop->id);
    printf("Salary = %.2f\n",pTop->salary);

    return 0;
}