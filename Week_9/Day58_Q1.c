//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
int main(){
    int n,i,j,a[200];
    long long prod;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ printf("Enter element: "); scanf("%d",&a[i]); }
    for(i=0;i<n;i++){
        prod=1;
        for(j=0;j<n;j++) if(j!=i) prod*=a[j];
        if(i<n-1) printf("%lld, ",prod); else printf("%lld\n",prod);
    }
    return 0;
}
