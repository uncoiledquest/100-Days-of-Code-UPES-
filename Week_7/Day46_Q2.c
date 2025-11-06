//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100],c;
    printf("Enter a string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0'){
        if (str[i]==str[i+1]) {
            c=str[i];
            break;
        }
        i++;
    }
    printf("%c",c);
}