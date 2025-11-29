//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
int main(){
    FILE *f;
    char c,prev=' ';
    int chars=0,words=0,lines=0;
    f=fopen("info.txt","r");
    if(f==NULL){ 
        printf("File not found"); 
        return 0; }
    while((c=fgetc(f))!=EOF){
        chars++;
        if(c=='\n') lines++;
        if(prev==' ' && c!=' ' && c!='\n') words++;
        prev=c;
    }
    if(chars>0) lines++;
    printf("Characters: %d\nWords: %d\nLines: %d",chars,words,lines);
    fclose(f);
    return 0;
}
