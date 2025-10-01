//Program to implement a basic calculator using switch-case for +, -, *, /, %

#include <stdio.h>
int main(){
    float a,b;
    char calc;
    printf("Enter first and second number: ");
    scanf("%f %f",&a,&b);
    printf("Operators: + , -, * , / , %% \n Enter which operator you'd like to use: ");
    scanf(" %c",&calc);
    switch(calc){
        case '+':
            printf("Required solution: %f\n",a+b);
            break;
        case '-':
            printf("Required solution: %f\n", a-b);
            break;
        case '*':
            printf("Required solution: %f\n", a*b);
            break;
        case '/':
            if (b!=0){
                printf("Required solutiohn: %f\n",a/b);
            }
            else{
                printf("Division by zero is not allowed.\n");
            }
            break;
        case '%':
        if ((int)b!=0){
            printf("Required solution: %f\n",(int)a%(int)b);
        }
        else{
            printf("Modulus by zero is not allowed.\n");
        }
        break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

}