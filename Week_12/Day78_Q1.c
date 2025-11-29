//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
int main(){
    FILE *f;
    char c;
    int v=0,con=0;
    f=fopen("input.txt","r");
    if(f==NULL){ 
        printf("File not found"); 
        return 0; 
    }
    while((c=fgetc(f))!=EOF){
        if(c>='A'&&c<='Z') c=c+32;
        if(c>='a'&&c<='z'){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') v++;
            else con++;
        }
    }
    fclose(f);
    printf("Vowels: %d\nConsonants: %d",v,con);
    return 0;
}
