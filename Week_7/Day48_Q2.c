//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
int main(){
    char s[201],w[201];
    int i=0,j=0,k;
    fgets(s,200,stdin);
    while(s[i]){
        if(s[i]==' '||s[i]=='\n'){
            for(k=j-1;k>=0;k--)printf("%c",w[k]);
            printf(" ");
            j=0;
        }else{
            w[j]=s[i];
            j++;
        }
        i++;
    }
    for(k=j-1;k>=0;k--)printf("%c",w[k]);
}
