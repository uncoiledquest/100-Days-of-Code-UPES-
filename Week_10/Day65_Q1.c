//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>
int main(){
    char s[500],t[500];
    int f1[26]={0},f2[26]={0},i;
    printf("Enter first string: ");
    scanf("%s",s);
    printf("Enter second string: ");
    scanf("%s",t);
    if(strlen(s)!=strlen(t)){ printf("Not Anagram"); return 0; }
    for(i=0;s[i];i++) f1[s[i]-'a']++;
    for(i=0;t[i];i++) f2[t[i]-'a']++;
    for(i=0;i<26;i++){
        if(f1[i]!=f2[i]){ printf("Not Anagram"); return 0; }
    }
    printf("Anagram");
    return 0;
}
