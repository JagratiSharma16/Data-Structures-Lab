#include<stdio.h>
struct student
{
    int r;
    char name[20];
    int age;
    char address[30];
    float m;
}s[15];
void main(){
    int i;
    for(i=0;i<=15;i++){
        printf("Enter the details of %d student",i+1);
        scanf("%d%s%d%s%f",&s[i].r,s[i].name,&s[i].age,s[i].address,&s[i].m);
        // fflush(stdin);
        // gets(s[i].name);
        //fflush will remove the previous records in gets functio and increase the memory space.

    }
}