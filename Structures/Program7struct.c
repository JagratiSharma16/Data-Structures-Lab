#include<stdio.h>
struct Marks
{
    int r;
    char name[20];
    float chem_marks;
    float maths_marks;
    float phy_marks;
}m[5];
void main(){
    int i,per[50];
    for(i=0;i<=5;i++){
        printf("Enter the details of %d student:",i+1);
        scanf("%d%s%f%f%f",&m[i].r,m[i].name,&m[i].chem_marks,&m[i].maths_marks,&m[i].phy_marks);
        per[i]= (m[i].chem_marks+m[i].maths_marks+m[i].phy_marks)/3.0;
    }
    for(i=0;i<=5;i++){
        printf("Percentage of %d student=%f",i+1,per[i]);
    }
}