// Program to calculate area and perimeter of rectangle.

#include <stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter Length of rectangle: ");
    scanf("%f", &l);
    printf("Enter Width of rectangle: ");
    scanf("%f",&b);
    a= l*b;
    p= 2*(l+b);
    printf("Area of rectangle: %f \n Perimeter is: %f",a,p);
}