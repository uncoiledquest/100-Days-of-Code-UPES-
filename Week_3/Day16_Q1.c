//Program to take a number as input and print its equivalent binary representation without using arrays or strings.
#include <stdio.h>
void printBinary(int n);
int main() {
    int n;
    printf("Enter a number to get binary representation of: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    } else {
        printf("Binary representation: \n");
        printBinary(n);
    }
}






void printBinary(int n) {
    if (n == 0){
        return;
    }
    printBinary(n/2);  
    printf("%d",n%2);
}

