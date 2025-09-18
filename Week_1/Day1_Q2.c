// Program to perform addition, subtraction, multiplication and division of two numbers.

#include <stdio.h>
int a,b;
void add();
void sub();
void multiply();
void divide();
int main()
{
    printf("Enter first number: ");
    scanf("%i",&a);
    printf("Enter second number: ");
    scanf("%i",&b);
    add();
    sub();
    multiply();
    divide();
    


}
void add(){
    int sum=a+b;
    printf("Sum is: %i\n", sum);

}
void sub(){
    int dif=a-b;
    printf("Difference is: %i\n", dif);
}

void multiply(){
    int mul=a*b;
    printf("Multiplication is: %i\n", mul);
}

void divide(){
    if(b==0){
        printf("Division by zero is not allowed");
        return;
    }
    float div=(float)a/b;
    printf("Division is: %f\n", div);
}
