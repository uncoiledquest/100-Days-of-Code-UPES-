//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main(){
    int n1,e1,num;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    int arr[100];
    //Adding elements
    printf("#Note: elements should be in increasing order for a bianry search.\n");
    printf("Enter %d sorted elements:\n", n1);
    for (int i=0;i<n1;i++) scanf("%d", &arr[i]);
    printf("Enter element you to add: ");
    scanf("%i",&num);
    //Searching Position
    int pos=n1;
    for (int i=0;i<n1;i++) {
        if (num<arr[i]) {
            pos=i;
            break;
        }
    }
    //Shifting elements to right
    for (int i=n1;i>pos;i--){
        arr[i]=arr[i-1];
    }
    //Inserting
    arr[pos]=num;
    n1++;
    printf("New array: \n");
    for (int i=0; i<n1; i++)printf("%i ",arr[i]);
}