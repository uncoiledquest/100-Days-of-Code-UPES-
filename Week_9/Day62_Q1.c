//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
int main(){
    int n,i,a[500];
    int curr,max;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ printf("Enter element: "); scanf("%d",&a[i]); }
    curr=a[0];
    max=a[0];
    for(i=1;i<n;i++){
        if(curr+a[i]>a[i]) curr=curr+a[i];
        else curr=a[i];
        if(curr>max) max=curr;
    }
    printf("%d",max);
    return 0;
}
