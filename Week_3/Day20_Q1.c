//Program to find the product of odd digits of a number.

#include <stdio.h>
int main(){

    int n,prod=0,digit;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0){
        digit=n%10;
        if(digit%2!=0){
            if(prod==0){
                prod=digit;
            } else {
                prod=prod*digit;
            }
        }
        n = n / 10;
    }

    if(prod == 0){
        printf("No odd digits present");
    } else {
        printf("Product of odd digits is: %d", prod);
    }
}
