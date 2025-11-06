//Multiply two matrices.

#include <stdio.h>
int main(){
    int r1,c1;
    //Making matrix 1
    printf("Enter number of rows and columns for arr1: ");
    scanf("%i %i",&r1,&c1);
    int arr1[r1][c1];
    printf("Matrix 1: ");
    for (int i=0; i<r1; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c1; j++) {
            scanf("%i",&arr1[i][j]);
        }
    }
    //Matrix 2
    int r2,c2;
    printf("Enter number of rows and columns for arr2: ");
    scanf("%i %i",&r2,&c2);
    int arr2[r2][c2];
    printf("Matrix 2: ");
    for (int i=0; i<r2; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c2; j++) {
            scanf("%i",&arr2[i][j]);
        }
    }
    //Multiplied matrix
    if (c1==r2){
        int r3=r1,c3=c2;
        int arr3[r3][c3];
        for (int i=0; i<r3; i++){
            for (int j=0; j<c3; j++) {
                int sum=0;
                for (int k=0; k<c1;k++){
                    sum+=arr1[i][k]*arr2[k][j];
                }
                arr3[i][j]=sum;
            }   
        }
        for (int i=0; i<r3; i++){
        for (int j=0; j<c3; j++) printf("%i ",arr3[i][j]);
        printf("\n");
    }
    }
    else{
        printf("Matrix can't be multiplied.");
    }
}