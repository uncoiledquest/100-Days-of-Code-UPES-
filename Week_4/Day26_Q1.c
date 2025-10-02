//Program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

#include <stdio.h>
int main(){
    int n=1,n1=5;
    for(int i=1;i!=6;i++){
        for(int k=1; k!=n1; k++){
            printf(" ");
        }
        for(int j=0;j!=n;j++){
            printf("%i",n1);
            n1+=1;
        }
        n+=1;
        n1-=n;
        printf("\n");
    }
}