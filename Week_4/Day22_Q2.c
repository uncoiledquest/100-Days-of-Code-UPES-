//Program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){
    int n;
    float s=3.0,sum=1.0;
    printf("Enter the nth term: ");
    scanf(" %i",&n);
    for( int i=1; i<n;i++){
        sum+=s/(s+1);
        s+=2;
    }
    printf("Sum of required series:%f ",sum);
}