//Program to check if a number is an Armstrong number.

#include <stdio.h>
int main(){
    int num,t1,t2,n=0;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    t1=num;
    while(t1!=0){
        t1=t1/10;
        n++;
    }
    t2=num;

    while(t2!=0){
        int digit = t2%10;
        int pow=1;
        for(int i=0;i<n;i++){
            pow=pow*digit;
        }
        sum+=pow;
        t2=t2/10;
    }
    if(sum == num){
        printf("%d is an Armstrong number",num);
    }
    else{
        printf("%d is not an Armstrong number",num);
    }
}