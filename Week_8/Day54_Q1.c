//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>
int main(){
    int n,i,j,a[200],cnt,maj=-1,majCount=0;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        cnt=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i])cnt++;
        }
        if(cnt>n/2){
            maj=a[i];
            majCount=cnt;
            break;
        }
        if(cnt>majCount){ majCount=cnt; maj=a[i]; }
    }

    if(majCount<=n/2){
        printf("-1\nExplanation:\nSize = %d, Count of %d = %d → %d is not strictly greater than %d.\nHence, no majority element exists.",n,maj,majCount,majCount,n/2);
    }else{
        printf("%d\nExplanation:\nSize = %d, Count of %d = %d → %d > %d.\nThus, %d is the majority element.",maj,n,maj,majCount,majCount,n/2,maj);
    }
}

