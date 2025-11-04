//Insert an element in an array at a given position.

#include <stdio.h>
int main(){
    int n1,e1,num,pos;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    int arr[100];
    //Adding elements
    printf("Enter %d elements:\n", n1);
    for (int i=0;i<n1;i++) scanf("%d", &arr[i]);

    printf("Enter element you to add: ");
    scanf("%i",&num);
    printf("Enter position: ");
    scanf("%i",&pos);
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