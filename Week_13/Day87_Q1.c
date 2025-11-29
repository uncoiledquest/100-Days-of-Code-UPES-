//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
enum role {ADMIN=1,USER,GUEST };
int main(){
    int x;
    enum role r;
    printf("Enter role (1=ADMIN, 2=USER, 3=GUEST): ");
    scanf("%d",&x);
    r=x;
    if(r==ADMIN) printf("Welcome Admin");
    else if(r==USER) printf("Welcome User");
    else if(r==GUEST) printf("Welcome Guest");
    else printf("Invalid Role");

}
