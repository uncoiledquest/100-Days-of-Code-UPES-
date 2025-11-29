//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
int main(){
    int n,i,a[500],sum=0,expected;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    expected=n*(n+1)/2;
    printf("%d",expected-sum);
    return 0;
}
