//Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student{
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    struct Student s[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<5;i++){
        printf("Name: %s\nRoll: %d\nMarks: %.2f\n",s[i].name,s[i].roll_no,s[i].marks);
    }
}
