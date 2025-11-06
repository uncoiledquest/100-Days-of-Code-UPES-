//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100],new[100];
    printf("Enter a string: ");
    gets(str);
    int i=0,j=0;
    while (str[i]!='\0'){
        if (!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
              str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')) {
            new[j] = str[i];
            j++;
        }
        i++;
    }
    new[j]='\0';
    printf("After removing vowels: %s", new);
}