// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
enum light { RED, YELLOW, GREEN };
int main(){
    enum light s;
    int x;
    printf("Enter light (0=RED,1=YELLOW,2=GREEN): ");
    scanf("%i",&x);
    s = x;

    if(s==RED) printf("Stop");
    else if(s==YELLOW) printf("Wait");
    else if(s==GREEN) printf("Go");
    else printf("Invalid");

}

