// Program to calculate sum of first n natural numbers.

#include <stdio.h>
int main(){
    int n,sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum= n*(n+1)/2;
    printf("Sum of first %d natural numbers is: %d", n,sum);
}