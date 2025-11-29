//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
int main(){
    FILE *f;
    int x,sum=0,count=0;
    f=fopen("numbers.txt","r");
    if(f==NULL){ 
        printf("File not found"); 
        return 0; 
    }
    while(fscanf(f,"%d",&x)==1){
        sum+=x;
        count++;
    }
    fclose(f);
    if(count==0){ printf("No numbers found"); return 0; }
    printf("Sum: %d\nAverage: %.2f",sum,(float)sum/count);
    return 0;
}
