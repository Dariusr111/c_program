#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}
    stud[2];
 
int main()
{
    int i;
 
    printf("Enter information of students:\n");
 
    // storing information
    for(i=0; i<2; ++i)
    {
        stud[i].roll = i+1;
 
        printf("\nFor roll number: %d\n",stud[i].roll);
 
        printf("Enter name: ");
        scanf("%s",stud[i].name);
 
        printf("Enter marks: ");
        scanf("%f",&stud[i].marks);
 
 
        printf("\n");
    }
 
    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<2; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(stud[i].name);
        printf("Marks: %.1f",stud[i].marks);
 
        printf("\n");
    }
    return 0;
}