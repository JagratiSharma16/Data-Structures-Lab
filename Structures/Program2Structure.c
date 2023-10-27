#include<stdio.h>
struct Student{
    int r;
    char name[20];
    float m;
}s;
void main(){
    printf("Enter the detail:");
    scanf("%d%s%f",&s.r,s.name,&s.m);
    printf("%d%s%f",s.r,s.name,s.m);
}