//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
int main(){
    int n,i,a[500],k,deq[500],front=0,back=0;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ printf("Enter element: "); scanf("%d",&a[i]); }
    printf("Enter k: ");
    scanf("%d",&k);
    if(k>n||k<=0){ return 0; }
    front=0;back=0;
    for(i=0;i<n;i++){
        while(front<back && a[deq[back-1]]<=a[i]) back--;
        deq[back++]=i;
        if(deq[front]<=i-k) front++;
        if(i>=k-1){
            if(i==n-1) printf("%d",a[deq[front]]); else printf("%d ",a[deq[front]]);
        }
    }
    printf("\n");
    return 0;
}
