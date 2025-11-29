//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student s,*p;
    p=&s;
    scanf("%s %d %f",p->name,&p->roll,&p->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.2f",p->name,p->roll,p->marks);
}
