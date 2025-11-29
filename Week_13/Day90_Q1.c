//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {Male=1,Female,Other};

struct Person{
    char name[50];
    enum Gender g;
};

int main(){
    struct Person p;
    int x;
    printf("Enter name: ");
    scanf("%s",p.name);
    printf("Enter gender (1=Male,2=Female,3=Other): ");
    scanf("%d",&x);
    p.g = x;

    if(p.g==Male) printf("Gender: Male");
    else if(p.g==Female) printf("Gender: Female");
    else if(p.g==Other) printf("Gender: Other");
    else printf("Invalid gender");
}
