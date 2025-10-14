//Find the maximum and minimum element in an array.

#include <stdio.h>
int main(){
    int arr[5]={10,4,5,123,9};
    int max=arr[0],min=arr[0];
    for (int i=1;i<5;i++){
        if (arr[i]>max) max=arr[i];
        if (arr[i]<min) min=arr[i];
    }
    printf("Max in array: %i\n Min in array: %i\n",max,min);
}