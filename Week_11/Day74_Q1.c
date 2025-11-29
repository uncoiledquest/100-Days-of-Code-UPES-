//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
int main(){
    char src[100],dst[100];
    FILE *f1,*f2;
    char c;
    printf("Enter source filename: ");
    scanf("%s",src);
    printf("Enter destination filename: ");
    scanf("%s",dst);
    f1=fopen(src,"r");
    if(f1==NULL){ 
        printf("Cannot open source file"); 
        return 0; }
    f2=fopen(dst,"w");
    while((c=fgetc(f1))!=EOF) fputc(c,f2);
    fclose(f1);
    fclose(f2);
    printf("File copied successfully");
    return 0;
}
