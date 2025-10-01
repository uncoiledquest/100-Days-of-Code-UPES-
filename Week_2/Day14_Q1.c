//Program to print the sum of the first n odd numbers

#include <stdio.h>
int main(){

    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    if (n<1){
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    sum=n*n;
    //NOTE: The sum of the first n odd numbers is n^2 (Simple grade 8th thing)
    printf("The sum of the first %d odd numbers is: %d\n",n,sum);

}