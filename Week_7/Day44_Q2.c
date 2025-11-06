//Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i=0;
    while (str[i]!='\0'){
        if (str[i]==' ') str[i]='-';
        i++;
    }
    printf("%s",str);
}