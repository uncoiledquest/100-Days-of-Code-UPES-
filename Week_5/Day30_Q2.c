//Count positive, negative, and zero elements in an array.


#include <stdio.h>
int main(){
    int arr[100]={},n;
    int pos=0,neg=0,zero=0;
    printf("Enter number of elements: ");
    scanf("%i",&n);
    for (int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%i",&arr[i]);
    }
    for (int i=0; i<n;i++){
        if (arr[i]<0) neg+=1;
        else if (arr[i]>0) pos+=1;
        else if (arr[i]==0) zero+=1;   
    }
    printf("Number of Positive: %i\n",pos);
    printf("Number of Negative: %i\n",neg);
    printf("Number of Zeros: %i\n",zero);
}