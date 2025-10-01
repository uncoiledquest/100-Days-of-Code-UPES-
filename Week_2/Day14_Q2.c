//Program to print the product of even numbers from 1 to n

#include <stdio.h>
int main(){
    int n,product=1; 
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if (n<1){
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }
    for (int i=2;i<=n;i+=2){ 
        product*=i;
    }
    printf("The product of even numbers from 1 to %d is: %d\n",n,product);
}