//Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Student{
    char name[50];
    int roll_no;
    float marks;
};

int main(){
    struct Student s[100];
    int n,i,top=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",s[i].name);
        printf("Enter roll: ");
        scanf("%d",&s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        if(s[i].marks>s[top].marks) top=i;
    }
    printf("Top Student: %s | Roll: %d | Marks: %.2f",s[top].name,s[top].roll_no,s[top].marks);
}
