//Program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main(){
    int n;
    float n1=2.0,n2=3.0,sum=0;
    printf("Enter the nth term: ");
    scanf("%i",&n);
    for( int i=1; i<n+1;i++){
        sum+=n1/n2;
        n1+=2;
        n2+=4;
    }
    printf("Sum of required series:%f ",sum);

}