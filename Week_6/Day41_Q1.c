//Count characters in a string without using built-in length functions.

#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Hello!!";
    int i=0,count=0;
    while (str[i]!='\0'){
        count++;
        i++;
    }
    printf("Length of string: %i",count);
}