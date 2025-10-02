//Program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

#include <stdio.h>
int main(){
    char c='*';
    for(int i=1;i!=6;i++){
        for(int j=1;j!=6;j++){
            printf("%c",c);
        }
        printf("\n");
    }
}