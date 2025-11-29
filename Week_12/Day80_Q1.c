//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>
int main(){
    FILE *f;
    int n,i,roll;
    char name[100];
    float marks;

    printf("Enter number of students: ");
    scanf("%d",&n);

    f=fopen("students.txt","w");
    for(i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",name);
        printf("Enter roll: ");
        scanf("%d",&roll);
        printf("Enter marks: ");
        scanf("%f",&marks);
        fprintf(f,"%s %d %.2f\n",name,roll,marks);
    }
    fclose(f);

    f=fopen("students.txt","r");
    printf("\nStored Records:\n");
    while(fscanf(f,"%s %d %f",name,&roll,&marks)==3){
        printf("%s %d %.2f\n",name,roll,marks);
    }
    fclose(f);

    return 0;
}
