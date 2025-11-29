//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main(){
    char fname[100],line[300];
    FILE *f;
    printf("Enter filename: ");
    scanf("%s",fname);
    getchar();
    printf("Enter line to append: ");
    fgets(line,300,stdin);
    f=fopen(fname,"a");
    if(f==NULL){ 
        printf("File not found"); 
        return 0; 
    }
    fputs(line,f);
    fclose(f);
    printf("Text appended successfully");
    return 0;
}
