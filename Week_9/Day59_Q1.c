//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int main(){
    int n,i,k,a[200];
    long long sum=0,max=-(1LL<<60);
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ printf("Enter element: "); scanf("%d",&a[i]); }
    printf("Enter k: ");
    scanf("%d",&k);
    if(k>n||k<=0){ printf("0\n"); return 0; }
    for(i=0;i<k;i++) sum+=a[i];
    max=sum;
    for(i=k;i<n;i++){ sum+=a[i]-a[i-k]; if(sum>max) max=sum; }
    printf("%lld\n",max);
    return 0;
}
