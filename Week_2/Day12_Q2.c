//Program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>
int main(){
    int units,bill;
    printf("Enter number of units consumed: ");
    scanf("%i",&units);

    if (units<=100 && units>0){
        bill= units*5;
        printf("Electricity bill: %i",bill);
    }
    else if(units<=200 && units>100){
        units-=100;
        bill= 100*5+units*7;
        printf("Electricity bill: %i",bill);
    }
    else if(units<=300 && units>200){
        units-=200;
        bill=100*5+100*7+units*10;
        printf("Electricity bill: %i",bill);
    }
    else if(units>300){
        units-=300;
        bill=100*5+100*7+100*10+units*12;
        printf("Electricity bill: %i",bill);
    }
}