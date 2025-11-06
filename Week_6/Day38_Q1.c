//Add two matrices.

#include <stdio.h>
int main(){
    int r,c;
    //Making matrix 1
    printf("Enter number of rows and columns for arr1: ");
    scanf("%i %i",&r,&c);
    int arr1[r][c],arr2[r][c];
    printf("Matrix 1: ");
    for (int i=0; i<r; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c; j++) {
            scanf("%i",&arr1[i][j]);
        }
    }
    //Matrix 2
    printf("Matrix 2: ");
    for (int i=0; i<r; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c; j++) {
            scanf("%i",&arr2[i][j]);
        }
    }
    printf("\n");
    //Sum
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++) printf("%i ",arr1[i][j]+arr2[i][j]);
        printf("\n");
    }
}