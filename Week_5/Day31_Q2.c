//Reverse an array without taking extra space.
#include <stdio.h>
int main(){
    int n,element;
    printf("Enter number of elemnts for array: ");
    scanf("%i",&n);
    int arr[n];
    for (int i=0; i<n;i++){
        printf("Element %i: ",i);
        scanf("%i",&element);
        arr[i]=element;
    }
    printf("Reversed: ");
    for (int i=n-1; i>=0;i--) printf("%i ",arr[i]);
}