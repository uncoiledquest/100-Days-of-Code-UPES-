//Program to print the following pattern:
//*
//**
//***
//****
//*****

#include <stdio.h>
int main(){
    int n=1;
    char c='*';
    for(int i=1;i!=6;i++){
        for(int j=0;j!=n;j++){
            printf("%c",c);
        }
        n+=1;
        printf("\n");
    }
}