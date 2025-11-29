#include<stdio.h>
struct student
 {char name[20];
    float marks;
};
int main()
{
    struct student s[3]={
        {"Pavan",85.0},{"Kumar",75.5},{"Ravi",90.0}
    };
    printf("Student with marks>80:\n");
    for(int i=0;i<3;i++)
    {
        if(s[i].marks>80.0)
        {
            printf("%s->%.2f\n",s[i].name,s[i].marks);
        }
    }
    return 0;
}