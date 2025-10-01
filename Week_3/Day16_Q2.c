//Program to check if a number is a palindrome.

#include <stdio.h>
int main(){
    int n,temp,p=0;
    printf("Enter a number to check if its a palindrome: \n");
    scanf(" %i",&n);
    temp=n;
    while (n!=0){
        p=(p*10)+(n%10);
        n=n/10;
    }
    if (temp==p){
        printf("The entered number Is a palindrome.\n");
    }
    else{
        printf("Entered number is Not a palindrome.\n");
    }
}