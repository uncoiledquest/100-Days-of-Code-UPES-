//Check if two strings are anagrams of each other

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    int c1[26]={0},c2[26]={0},flag=0;
    printf("Enter string 1: ");
    gets(str1);
    printf("Enter string 2: ");
    gets(str2);
    for (int i=0; str1[i]!='\0'; i++) {
        if (str1[i]>='a' && str1[i]<='z')
            c1[str1[i]-'a']++;
        else if (str1[i]>='A' && str1[i]<='Z')
            c1[str1[i]-'A']++;
    }
    for (int i=0; str2[i]!='\0'; i++) {
        if (str2[i]>='a' && str2[i]<='z')
            c2[str2[i]-'a']++;
        else if (str2[i]>='A' && str2[i]<='Z')
            c2[str2[i]-'A']++;
    }
    for (int i=0; i<26; i++) {
        if (c1[i]!=c2[i]) {
            flag=1;
            break;
        }
    }
    if (flag==1) printf("Not Anagrams");
    else printf("Anagram");
}