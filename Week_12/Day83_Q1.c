//Create an enum for months and print how many days each month has.

#include <stdio.h>

enum months { Jan=1,Feb,Mar,Apr,May,Jun,July,Aug,Sep,Oct,Nov,Dec};

int main(){
    enum months m;
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter month number (1-12): ");
    scanf("%d",&m);

    if(m==Feb) printf("28 or 29 days");
    else if(m>=Jan && m<=Dec) printf("%d days",days[m]);
    else printf("Invalid month");

    return 0;
}
