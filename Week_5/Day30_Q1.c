// Count even and odd numbers in an array.

#include <stdio.h>
int main(){
    int arr[100]={},n,e,odd=0,even=0;
    printf("Enter Number of elements: ");
    scanf("%i",&n);
    for (int i=0; i<n;i++){
        printf("Enter element: ");
        scanf("%i",&e);
        arr[i]=e;
    }
    for (int i=0; i<n;i++){
        if (arr[i]%2==0) even+=1;
        else odd+=1;
    }
    printf("Number of odds: %i \n Number of evens: %i",odd,even);
    
}