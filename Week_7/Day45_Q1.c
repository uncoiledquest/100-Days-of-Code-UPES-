//Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100], c;
    printf("Enter a string: ");
    gets(str);
    int i=0,count=0;
    printf("Enter a character: ");
    scanf("%c",&c);
    while (str[i]!='\0'){
        if (str[i]==c) count++;
        i++;
    }
    printf("Frequency of the character: %i",count);
}