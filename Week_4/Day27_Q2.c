//Write a program to print the following pattern:
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>
int main() {
    int n1=1,n2=3,ch1=1,ch2=-1;
    char c='*';

    for (int i=1; i!=8; i++) {
        for (int k=0; k!=n2;k++){
            printf(" ");
        } 
        for (int j=0; j<n1; j++) {
            printf("%c", c);
        }
        printf("\n"); 
        n1+=2*ch1;
        n2+=1*ch2;
        if (n1==7) ch1=-1;
        if (n2==0) ch2=1;
    }
}