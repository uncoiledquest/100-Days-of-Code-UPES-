// Program to calculate area and circumference of circle.

#include <stdio.h>
int main()
{
    float a,s;
    printf("Enter radius: ",s);
    scanf("%f", &s);
    a=3.14*s*s;
    printf("Area  is: %f", a);
    printf("\nCircumference is: %f", 2*3.14*s);
}