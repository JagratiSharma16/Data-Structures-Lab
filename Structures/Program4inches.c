#include<stdio.h>
struct distance
{
    float feet;
    float inches;
}d[2];
void main(){
    int i;
    float feets,inch;
    for(i=0;i<2;i++){
        printf("Enter the distance in feet");
        scanf("%f",&d[i].feet);
        printf("Enter the distance in inches");
        scanf("%f",&d[i].inches);
        feets +=d[i].feet;
        inch +=d[i].inches;
    }
    if(inch>12){
        inch=inch-12;
        feets++;
    }
    printf("The total distance is: %.2f feet and %.2f inches",feets,inch);
}