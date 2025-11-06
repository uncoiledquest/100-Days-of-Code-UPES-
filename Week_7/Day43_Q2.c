//Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int count=strlen(str);
    count--;
    int i=0,flag=0;
    while (i!=count){
        if (str[i]!=str[count]){
            flag=1;
            break;
        }
        i++;
        count--;
    }
    if (flag==1) printf("Not a palindrome.");
    else printf("Palindrome.");
}