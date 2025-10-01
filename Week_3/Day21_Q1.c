//Program to swap the first and last digit of a number.
#include <stdio.h>
int main(){ 
    int n,dig=0,t1,one,nth,mid,p=1,NUM;
    printf("Enter number to swap first and last digit of: ");
    scanf(" %i",&n);
    t1=n;

    while(t1!=0){
        t1=t1/10;
        dig++;
    }

    for( int i=1; i<dig; i++){
        p=p*10;
    }
    
    one=n%10;
    nth=(n/p);
    mid=(n/10)%(p/10);
    NUM=one*p+nth+(mid*10);
    // NOTE: This code can be done in one line by putting all the calculations directly in NUM
    //Instead of creating one, nth, mid. And also calculating p(power) can be done in single loop.
    printf("Swapped number: %i",NUM);

}