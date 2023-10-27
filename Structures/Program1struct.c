#include<stdio.h>
struct student
{
    int r;
    char name[20];
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    float m6;
}s[5];
void main(){
    int i,per[i];
    for(i=0;i<=5;i++){
        printf("Enter the details of %d student:",i+1);
        scanf("%d%s%f%f%f%f%f%f",&s[i].r,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5,&s[i].m6);
        per[i]= (s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5+s[i].m6)/6*100;
        if(per[i]>95){
            printf("Eligible");
        }
        else{
            printf("not eligible");
        }
    }
}