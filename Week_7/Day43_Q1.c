//Reverse a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Hello!!";
    int i=0,count=0;
    while (str[i]!='\0'){
        count++;
        i++;
    }
    count--;
    while (count!=-1){
        printf("%c",str[count]);
        count--;
    }
}