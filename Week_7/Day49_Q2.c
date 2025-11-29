//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
int main(){
    char s[201];
    int i=0,last=0;
    fgets(s,200,stdin);
    for(i=0;s[i];i++){
        if(s[i]==' ')last=i+1;
    }
    if(s[0]!=' ')printf("%c",s[0]);
    for(i=1;i<last-1;i++){
        if(s[i-1]==' '&&s[i]!=' ')printf("%c",s[i]);
    }
    printf("%s",s+last);
}
