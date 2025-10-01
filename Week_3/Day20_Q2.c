//Program to find the 1’s complement of a binary number and print it without array or string.

// # NOTE: Code would give '1' for inputs like '0000' or '00' for '0011', as leading zeros are not stored in integer format.
//Also pretty obvious No such binary as '0000' exists, its just 0. or '0011' is just 3.
#include <stdio.h>
void Binary(int n);
int main(){
    int n;
    printf("Enter a binary number: ");
    scanf("%d",&n);
    printf("1's complement is: "); 
    if(n==0){
        printf("1");
    } else {
        Binary(n);
    }
}













void Binary(int n) {
    if (n == 0){
        return;
    }
    Binary(n/10);  
    int digit=n%10;
    if(digit==0){
        printf("1");
    } else if(digit==1){
        printf("0");
    } else {
        printf("Invalid binary number");
        return;
    }
}