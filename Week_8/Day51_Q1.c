//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>
int main(){
    int n,t,i,f=-1,l=-1,a[200];
    printf("Enter number of terms in list: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter target: ");
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(a[i]==t){
            if(f==-1)f=i;
            l=i;
        }
    }
    printf("%d,%d",f,l);
}

