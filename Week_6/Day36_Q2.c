//Find the sum of all elements in a matrix.

#include <stdio.h>
int main(){
    int r,c,sum=0;
    //Making matrix
    printf("Enter number of rows and columns: ");
    scanf("%i %i",&r,&c);
    int arr[r][c];
    for (int i=0; i<r; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c; j++) {
            scanf("%i",&arr[i][j]);
            sum+=arr[i][j]; //Summing each value up
        }
    }
    printf("Sum: %i",sum);
}