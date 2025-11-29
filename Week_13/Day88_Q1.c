//Print all enum names and integer values using a loop.

#include <stdio.h>

enum days {Sunday=0,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main(){
    enum days d;
    char *names[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(d=Sunday; d<=Saturday; d++){
        printf("%s = %d\n",names[d],d);
    }
}
