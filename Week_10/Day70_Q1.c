//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[500];
    int i,start=1;
    printf("Enter string: ");
    fgets(s,500,stdin);
    for(i=0;s[i];i++){
        if(start && s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
            start=0;
        }else if(!start && s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        if(s[i]=='.') start=1;
    }
    printf("%s",s);
    return 0;
}
