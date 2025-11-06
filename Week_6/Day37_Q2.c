//Find the transpose of a matrix.
/* 1 2 3 
   4 5 6
   7 8 9
   
   1 4 7
   2 5 8 
   3 6 9
*/


#include <stdio.h>
int main(){
    int r,c;
    //Making matrix
    printf("Enter number of rows and columns: ");
    scanf("%i %i",&r,&c);
    int arr1[r][c],arr2[c][r];
    for (int i=0; i<r; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c; j++) {
            scanf("%i",&arr1[i][j]);
        }
    }
    for (int i=0; i<c; i++){
        for (int j=0; j<r; j++) arr2[i][j]=arr1[j][i];
}
    for (int i=0; i<c; i++){
        for (int j=0; j<r; j++) printf("%i ",arr2[i][j]);
        printf("\n");
}
}