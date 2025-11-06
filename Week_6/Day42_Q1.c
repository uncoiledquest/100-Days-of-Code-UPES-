//Count vowels and consonants in a string.

#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Hellooo!!";
    int i=0,vow=0,conso=0;
    while (str[i]!='\0'){
        if (str[i] >= 'a' && str[i] <= 'z') {  
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vow++;
            else
                conso++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {  
            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vow++;
            else
                conso++;
        }
        i++;
    }
    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", conso);
}