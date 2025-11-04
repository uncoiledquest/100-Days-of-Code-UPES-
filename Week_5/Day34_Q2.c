//Delete an element from an array.

#include <stdio.h>
int main(){
    int n1,e1,num;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    //Adding elements
    int arr[100];
    printf("Enter %d elements:\n", n1);
    for (int i=0;i<n1;i++) scanf("%d", &arr[i]);
    printf("Enter element you to remove: ");
    scanf("%i",&num);
    //Search
    int pos;
    for (int i=0; i<n1; i++){
        if (arr[i]==num) pos=i;
    }
    //Shifting elements to left
    for (int i=pos;i<n1-1;i++){
        arr[i]=arr[i+1];
    }
    n1--;
    printf("New array: \n");
    for (int i=0; i<n1; i++)printf("%i ",arr[i]);
}