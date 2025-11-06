//Check if a matrix is symmetric.

#include <stdio.h>
int main(){
    int n,flag=0;
    //Making matrix
    printf("Enter number of rows and columns for the square matrix: ");
    scanf("%i",&n);
    int arr1[n][n],arr2[n][n];
    for (int i=0; i<n; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<n; j++) {
            scanf("%i",&arr1[i][j]);
        }
    }
    //Transpose
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) arr2[i][j]=arr1[j][i];
    }
    //Checking
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            if(arr2[i][j]!=arr1[i][j]) flag=1;
        }
    }
    if (flag==0) printf("It is symmetric");
    else printf("Not symmetric");
}