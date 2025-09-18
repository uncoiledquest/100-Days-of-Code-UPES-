// Program to swap two numbers without using a temporary variable.
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped values: \na = %d, b = %d\n", a, b);
}