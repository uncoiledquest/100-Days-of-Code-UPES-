//Program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, D, R1, R2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("The quadratic equation is: %.1fx^2 + %.1fx + %.1f = 0\n", a, b, c);

    D= b*b -4*a*c;

    if (D<0){
        printf("Roots are complex.");
    }
    else if (D==0) {
        printf("Roots are real and equal\n");
        R1= ( -b + sqrt(D))/(2*a);
        printf("Root: %.2f",R1);
    }
    else if (D>0){
        printf("Roots are real and differnet.\n");
        R1= ( -b + sqrt(D))/(2*a);
        R2= ( -b - sqrt(D))/(2*a);
        printf("Roots: %.2f and %.2f", R1,R2);
    }

}