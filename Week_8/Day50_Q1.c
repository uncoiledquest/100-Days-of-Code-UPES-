//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
int main(){
    char d[3],m[3],y[5];
    char *mon[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int x;
    scanf("%2s/%2s/%4s",d,m,y);
    x=(m[0]-'0')*10+(m[1]-'0');
    printf("%s-%s-%s",d,mon[x-1],y);
}
