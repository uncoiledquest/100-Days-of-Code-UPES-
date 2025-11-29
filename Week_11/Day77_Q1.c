//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
int main(){
    FILE *in,*out;
    char c;
    in=fopen("input.txt","r");
    if(in==NULL){ 
        printf("input.txt not found"); 
        return 0; 
    }
    out=fopen("output.txt","w");
    while((c=fgetc(in))!=EOF){
        if(c>='a' && c<='z') c=c-32;
        fputc(c,out);
    }
    fclose(in);
    fclose(out);
    printf("Conversion complete");
    return 0;
}
