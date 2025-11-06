//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Hello!!",str2[8];
    int i=0,count=0;
    while (str[i]!='\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str2[i]= str[i]-32;
        }
        else str2[i]=str[i];
        i++;
    }
    printf("%s",str2);
}

//str2[i]='\0';