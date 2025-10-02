//Program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

#include <stdio.h>
int main() {
    int n=1,ch=1;
    char c='*';

    for (int i=1; i!=10; i++) { 
        for (int j=0; j<n; j++) {
            printf("%c", c);
        }
        printf("\n"); 
        n+=2*ch;
        if (n==9) ch=-1;
    }
}