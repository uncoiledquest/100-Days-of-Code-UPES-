//Program to check if a number is a perfect number.
//A perfect number is a positive integer that is equal to the sum of its proper positive divisors, excluding the number itself.
#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("%d is a perfect number",num);
    } else {
        printf("%d is not a perfect number",num);
    }
}