//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
int main(){
    int m,n,i,j,a[500],b[500],c[1000],p=0,q=0,r=0;
    printf("Enter size of first array: ");
    scanf("%d",&m);
    for(i=0;i<m;i++){ 
        printf("Enter element: "); 
        scanf("%d",&a[i]); 
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ 
        printf("Enter element: "); 
        scanf("%d",&b[i]); 
    }

    while(p<m && q<n){
        if(a[p]<=b[q]) c[r++]=a[p++];
        else c[r++]=b[q++];
    }
    while(p<m) c[r++]=a[p++];
    while(q<n) c[r++]=b[q++];

    for(i=0;i<r;i++){
        if(i<r-1) printf("%d ",c[i]);
        else printf("%d",c[i]);
    }
    return 0;
}
