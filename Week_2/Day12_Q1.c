//Program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>
int main(){
    int late,fine;
    printf("Enter how many days late: ");
    scanf("%i",&late);
    if (late<=5 && late>=0){
        fine= late*2;
        printf("Library Fine: %i",fine);
    }
    else if(late<0){
        printf("Invalid input");
    }
    else if (late<=10 && late>5){
        late= late-5;
        fine= 5*2+late*4;
        printf("Library fine: %i", fine);
    }
    else if (late<=30 && late>=10){
        late=late-10;
        fine= 5*2+5*4+late*6;
        printf("Library fine: %i",fine);
    }
    else if (late>30){
        printf("Membership cancelled.");
    }


}