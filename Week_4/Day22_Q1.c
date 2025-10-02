//Program to check if a number is a strong number.
//A strong number is a number in which the sum of the factorial of each digit is equal to the number itself.

#include <stdio.h>
int main(){
    int num,t1,t2,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    t1=num;
    while(t1!=0){
        int fact=1;
        for(int i=1;i<=(t1%10);i++){
            fact=fact*i;
        }
        sum+=fact;
        t1=t1/10;
    }
    if(sum==num){
        printf("%d is a strong number",num);
    }
    else{
        printf("%d is not a strong number",num);
    }
}
