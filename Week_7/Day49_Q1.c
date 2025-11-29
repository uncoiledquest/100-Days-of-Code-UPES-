//Print the initials of a name.

#include <stdio.h>
#include <string.h>
int main(){
    char s[201];
    int i=0;
    fgets(s,200,stdin);
    if(s[0]!=' ')printf("%c",s[0]);
    for(i=1;s[i];i++){
        if(s[i-1]==' '&&s[i]!=' ')printf("%c",s[i]);
    }
}
