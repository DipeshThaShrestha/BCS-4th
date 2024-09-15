#include<stdio.h>
struct student{
    char name[20];
    int age;
};
int main()
{
    struct student s;
    struct student *ptr;
    printf("Enter name and age of student: ");
    scanf("%s",&s.name);
    scanf("%d",&s.age);
    ptr=&s;
    printf("\nSTUDENT INFORMATION\n");
    printf("\nName:%s\n",s.name);
    printf("\nAge:%d\n",s.age);
    printf("------------------------------------");
    printf("\nName:%s\n",ptr->name);
    printf("\nAge:%d\n",ptr->age);
    return 0;
}
