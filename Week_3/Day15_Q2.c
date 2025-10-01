//Program to reverse a given number.
#include <stdio.h>
int main(){
    int n,rev=0,rem;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("The reversed number is: %d\n",rev);
}