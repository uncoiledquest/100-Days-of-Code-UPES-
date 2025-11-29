//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum status {SUCCESS=1,FAILURE,TIMEOUT};

int main(){
    enum status s;
    int x;
    printf("Enter status (1=SUCCESS, 2=FAILURE, 3=TIMEOUT): ");
    scanf("%d",&x);
    s=x;
    if(s==SUCCESS) printf("Operation Successful");
    else if(s==FAILURE) printf("Operation Failed");
    else if(s==TIMEOUT) printf("Operation Timed Out");
    else printf("Invalid Status");

}
