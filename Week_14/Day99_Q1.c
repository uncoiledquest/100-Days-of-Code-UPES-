//Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));
    printf("Enter name: ");
    scanf("%s",s->name);
    printf("Enter roll: ");
    scanf("%d",&s->roll);
    printf("Enter marks: ");
    scanf("%f",&s->marks);
    printf("Name: %s | Roll: %d | Marks: %.2f",s->name,s->roll,s->marks);
    free(s);
}
