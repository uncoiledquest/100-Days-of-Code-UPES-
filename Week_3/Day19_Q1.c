//Program to find the LCM of two numbers.
#include <stdio.h>
int main(){
    int n1,n2,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    lcm = (n1>n2) ? n1 : n2; 
    while(1){
        if(lcm%n1==0 && lcm%n2==0){
            break;
        }
        lcm++;
    }
    printf("LCM of %d and %d is %d",n1,n2,lcm);
}