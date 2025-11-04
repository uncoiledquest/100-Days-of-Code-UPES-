//Search in a sorted array using binary search.

#include <stdio.h>
int main(){
    int n1,e1,target;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    int arr1[n1];
    printf("Enter element you want to search for: ");
    scanf("%i",&target);
    printf("#Note: elements should be in increasing order for a bianry search.\n");
    for (int i=0; i<n1;i++){
        printf("Element %i: ",i);
        scanf("%i",&e1);
        arr1[i]=e1;
    }
    int low=0,high=n1-1,mid,flag=0;
    while (low<=high){
        mid=(low+high)/2;
        if (arr1[mid]==target){
            printf("Found at position %d (index %d)\n",mid+1,mid);
            flag=1;
            break;
        }
        else if (arr1[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(flag==0){
        printf("-1");
    }
}