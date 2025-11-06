//Find the longest word in a sentence.

#include<stdio.h>
#include<string.h>
int main(){
    char str[200],word[50],longest[50];
    int i=0,j=0,maxlen=0;
    printf("Enter a sentence:");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]!=' '&&str[i]!='\n'&&str[i]!='\t'){
            word[j++]=str[i];
        }
        else{
            word[j]='\0';
            if(j>maxlen){
                maxlen=j;
                strcpy(longest,word);
            }
            j=0;
        }
        i++;
    }
    word[j]='\0';
    if(j>maxlen)strcpy(longest,word);
    printf("Longest word:%s",longest);
}
