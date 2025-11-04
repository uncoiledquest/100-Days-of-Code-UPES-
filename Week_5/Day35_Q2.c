//Rotate an array to the right by k positions.
#include <stdio.h>

int main(){
    int n1,e1,r;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    //Adding elements
    int arr[100];
    printf("Enter %d elements:\n", n1);
    for (int i=0;i<n1;i++) scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%i",&r);
    if (r>n1) r=r%n1;
    //Rotating
    for (int i=0; i<r; i++) {
        int last=arr[n1-1]; 
        for (int i=n1-1; i>0; i--) {
            arr[i]=arr[i-1]; 
        }
        arr[0]=last; 
    }
    printf("Rotated array: ");
    for (int i=0; i<n1; i++) printf("%i ",arr[i]);
}