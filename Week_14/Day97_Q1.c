//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Employee{
    char name[50];
    int id;
    struct Date join;
};

int main(){
    struct Employee e1,e2;
    FILE *f;

    printf("Enter name: ");
    scanf("%s",e1.name);
    printf("Enter ID: ");
    scanf("%d",&e1.id);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d",&e1.join.day,&e1.join.month,&e1.join.year);

    f=fopen("employee.dat","wb");
    fwrite(&e1,sizeof(struct Employee),1,f);
    fclose(f);

    f=fopen("employee.dat","rb");
    fread(&e2,sizeof(struct Employee),1,f);
    fclose(f);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n",e2.name);
    printf("ID: %d\n",e2.id);
    printf("Joining Date: %d-%d-%d",e2.join.day,e2.join.month,e2.join.year);
}
