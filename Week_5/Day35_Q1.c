//Find the second largest element in an array.

#include <stdio.h>
int main(){
    int n1,e1;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    //Adding elements
    int arr[100];
    printf("Enter %d elements:\n", n1);
    for (int i=0;i<n1;i++) scanf("%d", &arr[i]);
    //Searching
    int max=arr[0],smax=arr[0];
    for (int i=0;i<n1; i++){
        if (max<arr[i])max=arr[i];
    }
    for (int i=0;i<n1; i++){
        if (smax<arr[i] && arr[i]!=max)smax=arr[i];
    }
    printf("Second largest: %i",smax);
}