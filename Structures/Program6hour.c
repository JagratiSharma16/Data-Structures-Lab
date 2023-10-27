#include<stdio.h>
struct time{
    int h;
    int m;
    int s;
};
void main(){
    struct time t1,t2,t3;
    printf("Enter the elements: ");
    scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
    printf("Enter the elements: ");
    scanf("%d%d%d",&t2.h,&t2.m,&t2.s);

    int x,y,z,c=0;
    x=t1.s+t2.s+c;
    c=x/60;
    x=x%60;

    y=t1.m+t2.m+c;
    c=y/60;
    y=y%60;

    z=t1.h+t2.h+c;

    t3.h=z;
    t3.m=y;
    t3.s=x;

    printf("%d::%d::%d",t3.h,t3.m,t3.s);
}
    // int i,h,m,s,d[5];
    // printf("Enter the time in hour , minute and second:");
    // for(i=0;i<=1;i++){
    //     scanf("%d%d%d",&t[i].hour,&t[i].min,&t[i].sec);
    //     d[i]=t[i].sec+60*t[i].min+(3600-1)*t[i].hour;
    // }
    // printf("The sum of time is:%d",d[0]+d[1]);
// int hour(int h, int m,int s){
//     return (s+60*m+(3600-1)*h);
// }