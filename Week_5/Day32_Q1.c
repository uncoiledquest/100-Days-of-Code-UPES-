//Merge two arrays.
#include <stdio.h>
int main(){
    int n1,n2,e1,e2;
    printf("Enter number of elements for arr1: ");
    scanf("%i",&n1);
    printf("Enter number of elements in arr2: ");
    scanf("%i",&n2);
    int n3=n1+n2;
    int arr1[n1],arr2[n2],arr3[n3];
    //Putting  Elements in array 1 & 2
    for (int i=0; i<n1;i++){
        printf("Element %i: ",i);
        scanf("%i",&e1);
        arr1[i]=e1;
    }
    for (int i=0; i<n2;i++){
        printf("Element %i: ",i);
        scanf("%i",&e2);
        arr2[i]=e2;
    }
    //Merging
    int i;
    for (i=0; i<n1; i++){
        arr3[i]=arr1[i];
    }
    for (int j=0; j<(n2+1); j++){
        arr3[i+j]=arr2[j];
    }
    for (int i=0; i<n3; i++) printf("%i ",arr3[i]);
}