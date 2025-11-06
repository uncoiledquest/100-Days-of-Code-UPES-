//Read and print a matrix.

#include <stdio.h>
int main(){
    int arr[2][2];
    arr[0][0]=5;
    arr[0][1]=6;
    arr[1][0]=7;
    arr[1][1]=8;
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++) printf("%i ",arr[i][j]);
        printf("\n");
    }
    //OR
    printf("\n");
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) printf("%i ",arr2[i][j]);
        printf("\n");
    }

//Basically there are 2 different ways in which we can make a matrix.
}