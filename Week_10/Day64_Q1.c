//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>
int main(){
    char s[500];
    int i,j,k,n,ok,max=0;
    printf("Enter string: ");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++){
        ok=1;
        for(j=i;j<n;j++){
            for(k=i;k<j;k++){
                if(s[k]==s[j]) ok=0;
            }
            if(ok){
                if(j-i+1>max) max=j-i+1;
            }else break;
        }
    }
    printf("%d",max);
    return 0;
}
