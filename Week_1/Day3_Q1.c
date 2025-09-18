// Program to convert temperature from Celsius to Fahrenheit and vice versa.

#include <stdio.h>
void cel_far();
void far_cel();
int main()
{
    int ch;
    printf("What do you wish to convert?\n 1. Celius \n 2. Farenheit\n 3. Exit\n Enter Choice: ");
    scanf("%i", &ch);
    while (ch!=3){
        if(ch==1){
        cel_far();
    }
        else if(ch==2){
            far_cel();
    }
        else{
            printf("\n Invalid Input");
    }
    printf("\nDo u wish to enter choice again?: ");
    scanf("%i", &ch);

}
printf("\nThanks for using the code! ");
}






















void cel_far(){
    float c;
    float f;
    printf("Enter celius: ");
    scanf("%f", &c);
    f=(c*9.0/5.0)+32;
    printf("The temperature in Farenheit is: %fF\n",f);

}

void far_cel(){
    float f;
    float c;
    printf("Enter Farenheit: ");
    scanf("%f", &f);
    c=(f-32)*(5.0/9.0);
    printf("The temperature in Celius is: %fC\n",c);

}