//Find the sum of array elements.
#include <stdio.h>
int main(){
    int i,sum=0;
    int arr[5]={10,20,30,40,50};
    for (i=0; i<5;i++) sum+=arr[i]; 
    printf("Required sum: %i",sum);    
}