//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
int main(){
    int n,i,j,k,a[500],t;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ printf("Enter element: "); scanf("%d",&a[i]); }
    printf("Enter k: ");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d",a[k-1]);
    return 0;
}
