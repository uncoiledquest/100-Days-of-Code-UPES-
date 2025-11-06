//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int r,c;
    //Making matrix
    printf("Enter number of rows and columns: ");
    scanf("%i %i",&r,&c);
    int arr[r][c],arr_sum[r];
    for (int i=0; i<r; i++){
        int sum=0;
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<c; j++) {
            scanf("%i",&arr[i][j]);
            sum+=arr[i][j];
        }
        //Taking sum and putting them in a separate array.
        arr_sum[i]=sum;
    }
    printf("Sum in row order: ");
    for (int i=0; i<r; i++) printf("%i ",arr_sum[i]);
}