//Search for an element in an array using linear search.

#include <stdio.h>
int main(){
    int ind,num,flag=0;
    int arr[5]={10,20,30,40,50};
    printf("Enter Number you want: ");
    scanf("%i",&num);
    for ( int i=0;i<5;i++){
        if (num==arr[i]){
            flag=0;
             ind=i; break;
        }
        else flag=1;
    }
    if (flag==1) printf("Number is not in the array.");
    else printf("Number is at index %i",ind);

}