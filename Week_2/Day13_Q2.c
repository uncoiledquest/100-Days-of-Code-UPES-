//Program to print numbers from 1 to n

#include <stdio.h>
int main(){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if (n<1){
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }
    for (int i=1;i<=n;i++){
        printf("%d\n",i);
    }
}