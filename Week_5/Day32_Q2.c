//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main(){
    int n;
    int count[10]={0};
    int d,maxD=0,maxC=0;
    printf("Enter an integer: ");
    scanf("%i",&n);
    // Count digits
    while (n>0) {
        d=n%10;
        count[d]++;
        n/=10;
    }
    // Find the digit with the maximum count
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxC) {
            maxC=count[i];
            maxD=i;
        }
    }
    printf("The digit that occurs the most is %d",maxD);
}
