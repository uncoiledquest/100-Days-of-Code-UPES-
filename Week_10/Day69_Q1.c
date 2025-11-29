//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
int main(){
    int n,i,a[500],seen[10000]={0},rep=-1;
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
        if(seen[a[i]]==1){ 
            rep=a[i]; 
            break; 
        }
        seen[a[i]]++;
    }
    printf("%d",rep);
    return 0;
}
