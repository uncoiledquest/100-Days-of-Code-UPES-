//Take two structs as input and check if they are identical.

#include <stdio.h>
struct Student{
    char name[50];
    int roll;
    int marks;
};
int main(){
    struct Student a,b;
    printf("Enter first student (name roll marks): ");
    scanf("%s %d %d",a.name,&a.roll,&a.marks);
    printf("Enter second student (name roll marks): ");
    scanf("%s %d %d",b.name,&b.roll,&b.marks);

    if(a.roll==b.roll && a.marks==b.marks && strcmp(a.name,b.name)==0)
        printf("Same");
    else
        printf("Not Same");
}
