//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>
int main(){
    int n,i,a[200],sum=0,left=0,p=-1;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++){
        if(left==sum-left-a[i]){
            p=i;
            break;
        }
        left+=a[i];
    }
    printf("%d",p);
}
