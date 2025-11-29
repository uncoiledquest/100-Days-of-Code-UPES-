//Check if one string is a rotation of another

#include <stdio.h>
#include <string.h>
int main(){
    char a[101],b[101],c[202];
    scanf("%s%s",a,b);
    if(strlen(a)!=strlen(b)){
        printf("Not rotation");
        return 0;
    }
    strcpy(c,b);
    strcat(c,b);
    if(strstr(c,a))printf("Rotation");
    else printf("Not rotation");
}