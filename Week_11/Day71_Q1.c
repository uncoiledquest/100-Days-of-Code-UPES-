//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>
int main(){
    char name[100];
    int age;
    FILE *f;
    printf("Enter name: ");
    fgets(name,100,stdin);
    printf("Enter age: ");
    scanf("%d",&age);
    f=fopen("info.txt","w");
    fprintf(f,"%s%d",name,age);
    fclose(f);
    printf("Data saved successfully");
    return 0;
}
