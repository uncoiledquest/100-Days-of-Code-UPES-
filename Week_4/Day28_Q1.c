//Program to print all the prime numbers from 1 to n.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number till which you want prime numbers: ");
    scanf("%i",&n);
    printf("Prime Numbers: 2,");
    for (int i=3;i<=n;i++){
        int flag=1;
        for(int j=2; j<=i-1;j++){
            if (i%j==0) {
                flag=0;
                break;
            }
        }
    if (flag==1) printf(" %i,", i);
    }
}