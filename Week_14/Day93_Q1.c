//Find and print the student with the highest marks.

#include <stdio.h>

struct Student{
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    struct Student s[5];
    int i,maxIndex=0;
    for(i=0;i<5;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("\nAll Students:\n");
    for(i=0;i<5;i++){
        printf("Name: %s  Roll: %d  Marks: %.2f\n",s[i].name,s[i].roll_no,s[i].marks);
    }
    for(i=1;i<5;i++){
        if(s[i].marks>s[maxIndex].marks) maxIndex=i;
    }
    printf("\nTopper:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f",s[maxIndex].name,s[maxIndex].roll_no,s[maxIndex].marks);
}
