#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Student
{
    int rollnumber;
    char name[100];
    char phone[100];
    float percentage;
    struct Student *next;
    
}* head;
void insert(int rollnumber, char* name, char* phone, float percentage)
{
    
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->rollnumber = rollnumber;
    strcpy(student->name, name);
    strcpy(student->phone, phone);
    student->percentage = percentage;
    student->next = NULL;
    
    if(head==NULL){
       
        head = student;
    }
    else{
        
        student->next = head;
        head = student;
    }
    
}
//searching//
void search(int rollnumber)
{
    struct Student * temp = head;
    while(temp!=NULL){
        if(temp->rollnumber==rollnumber){
            printf("Roll Number: %d\n", temp->rollnumber);
            printf("Name: %s\n", temp->name);
          
            printf("Percentage: %0.4f\n", temp->percentage);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
}
void update(int rollnumber)
{
    
    struct Student * temp = head;
    while(temp!=NULL){
        
        if(temp->rollnumber==rollnumber){
            printf("Record with roll number %d Found !!!\n", rollnumber);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("Enter new phone number: ");
            scanf("%s", temp->phone);
            printf("Enter new percentage: ");
            scanf("%f",&temp->percentage);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
void Delete(int rollnumber)
{
    struct Student * temp1 = head;
    struct Student * temp2 = head; 
    while(temp1!=NULL){
        
        if(temp1->rollnumber==rollnumber){
            
            printf("Record with roll number %d Found !!!\n", rollnumber);
            
            if(temp1==temp2){
                
                head = head->next;
                free(temp1);
            }
            else{
                
                temp2->next = temp1->next;
                free(temp1); 
            }
            
            printf("Record Successfully Deleted !!!\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("Student with roll number %d is not found !!!\n", rollnumber);
    
}
void display()
{
    struct Student * temp = head;
    while(temp!=NULL){
        
        printf("Roll Number: %d\n", temp->rollnumber);
        printf("Name: %s\n", temp->name);
        printf("Phone: %s\n", temp->phone);
        printf("Percentage: %0.2f %%\n\n", temp->percentage);
        temp = temp->next;
        
    }
}
int main()
{
    head = NULL;
    int choice;
    char name[100];
    char phone[100];
    int rollnumber;
    float percentage;
    printf("STUDENT RECORD MANAGEMENT SYSTEM \n1.Insert student details\n2.Search for student details\n3.Delete student details\n4.Update student details\n5.Display all student details");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter roll number: ");
                scanf("%d", &rollnumber);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone number: ");
                scanf("%s", phone);
                printf("Enter percentage: ");
                scanf("%f", &percentage);
                insert(rollnumber, name, phone, percentage);
                break;
            case 2:
                printf("Enter roll number to search: ");
                scanf("%d", &rollnumber);
                search(rollnumber);
                break;
            case 3:
                printf("Enter roll number to delete: ");
                scanf("%d", &rollnumber);
                Delete(rollnumber);
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &rollnumber);
                update(rollnumber);
                break;
            case 5:
                display();
                break;
        }
        
    } while (choice != 0);
}