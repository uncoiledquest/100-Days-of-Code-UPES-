//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student{
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTop(struct Student s[],int n){
    int i,top=0;
    for(i=1;i<n;i++){
        if(s[i].marks>s[top].marks) top=i;
    }
    return s[top];
}

int main(){
    int n,i;
    struct Student s[100],t;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter roll: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter marks: ");
        scanf("%d",&s[i].marks);
    }
    t = getTop(s,n);
    printf("Top Student: %s | Roll: %d | Marks: %d",t.name,t.roll_no,t.marks);
}
