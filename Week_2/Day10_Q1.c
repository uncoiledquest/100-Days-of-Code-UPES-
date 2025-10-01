//Program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main() {
    float s1, s2, s3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
        printf("Invalid input. Side lengths must be positive numbers.\n");
    }
    else if ((s1 + s2 <= s3) || (s2 + s3 <= s1) || (s1 + s3 <= s2)) {
        printf("Invalid triangle. The sum of any two sides must be greater than the third side.\n"); 
    }
    else if (s1 == s2 && s2 == s3) {
        printf("The triangle is Equilateral.\n");
    } 
    else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("The triangle is Isosceles.\n");
    } 
    else {
        printf("The triangle is Scalene.\n");
    } 
}