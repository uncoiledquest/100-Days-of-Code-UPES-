//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main(){
    int n,flag=0;
    //Making matrix
    printf("Enter number of rows and columns for the square matrix: ");
    scanf("%i",&n);
    int arr1[n][n],arr2[n];
    for (int i=0; i<n; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<n; j++) {
            scanf("%i",&arr1[i][j]);
        }
    }
    //Adding diagonal elements to 2nd matrix.
    for (int i=0; i<n; i++) arr2[i]=arr1[i][i];
    //Checking
    for (int i=0; i<n-1; i++){
        if (arr2[i]==arr2[i+1]){
            flag=1;
            break;
        }
    }
    if (flag==1) printf("Elements are not distinct.");
    else printf("Elements are distinct.");
}