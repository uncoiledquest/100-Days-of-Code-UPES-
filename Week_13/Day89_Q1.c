//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum letters {A=5,B,C};

int main(){
    printf("A = %d\n",A);
    printf("B = %d\n",B);
    printf("C = %d\n",C);
}
