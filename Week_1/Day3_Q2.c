// Program to swap two numbers using a temporary variable.

#include <stdio.h>
int main(void)
{
    int x,y,temp;
    printf("Enter x: ");
    scanf("%i",&x);
    printf("Enter y: ");
    scanf("%i", &y);
    temp=x;
    x=y;
    y=temp;
    printf("Swapped values: \nx: %i\ny:%i",x,y);
}