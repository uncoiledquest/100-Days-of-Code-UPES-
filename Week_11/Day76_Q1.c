//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>
int main(){
    char fname[100],s[300];
    FILE *f;
    printf("Enter filename: ");
    scanf("%s",fname);
    f=fopen(fname,"r");
    if(f==NULL){
        printf("Error: File does not exist");
        return 0;
    }
    while(fgets(s,300,f)!=NULL) printf("%s",s);
    fclose(f);
    return 0;
}
