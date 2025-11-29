//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
enum menu {ADD=1,SUBTRACT,MULTIPLY };
int main(){
    int choice,a,b;
    enum menu m;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("1=ADD, 2=SUBTRACT, 3=MULTIPLY\nEnter choice: ");
    scanf("%d",&choice);
    m=choice;
    switch(m){
        case ADD: printf("%d",a+b); break;
        case SUBTRACT: printf("%d",a-b); break;
        case MULTIPLY: printf("%d",a*b); break;
        default: printf("Invalid choice");
    }

}
