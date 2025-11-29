//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
int main(){
    char s[201];
    int i,j,k,n;
    if(scanf("%200s",s)!=1)return 0;
    n=strlen(s);
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            for(k=0;k<j;k++)putchar(s[i+k]);
            putchar('\n');
        }
    }
}
