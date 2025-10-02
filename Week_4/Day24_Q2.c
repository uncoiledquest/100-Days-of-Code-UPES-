//Program to print the following pattern:
//1
//12
//123
//1234
//12345

#include <stdio.h>
int main(){
    int n=1;
    for(int i=1;i!=6;i++){
        int n1=1;
        for(int j=0;j!=n;j++){
            printf("%i",n1);
            n1+=1;
        }
        n+=1;
        printf("\n");
    }
}
