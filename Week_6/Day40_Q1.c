//Perform diagonal traversal of a matrix.

//Random comment: By far the most head twisting question... Had to work on so many bugs.

#include <stdio.h>
int main(){
    int n,sum=0;
    //Making matrix
    printf("Enter number of rows and columns for the square matrix: ");
    scanf("%i",&n);
    int arr[n][n];
    for (int i=0; i<n; i++){
        printf("Enter elements for row %i: \n",i+1);
        for (int j=0; j<n; j++) {
            scanf("%i",&arr[i][j]);
        }
    }
    //Performing the transversal
    int r=0,c=-1;
    for (int i=0; i<(n*n);i++){
        //Bottom Border
        if(r==n){
            r=n-1;
            c+=2;
            while(c<n && c!=-1){
                printf("%i ",arr[r][c]);
                c++;
                r--;
            }
        } 
        //Right Border
        if (c==n){
            c=n-1;
            r+=2;
            while(r!=-1 && r<n){
                printf("%i ",arr[r][c]);
            c--;
            r++;
            }
        }
        //Left Border
        else if (c==-1){
            c=0;
            while(r!=-1 && r<n){
                printf("%i ",arr[r][c]);
                c++;
                r--;
            }
        }        
        //Top border
        else if (r==-1 ){
            r=0;
            while(c<n && c!=-1){
                printf("%i ",arr[r][c]);
            c--;
            r++;
            }
        }
    }
}