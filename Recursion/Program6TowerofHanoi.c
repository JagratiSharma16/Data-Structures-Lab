#include<stdio.h>
int TOH(int n, char a,char b,char c){
    if (n==1) {
        printf("Move disk %d from %c to %c",n,a,c);
    }
    TOH(n-1,a,c,b);
    printf("Move disk %d from %c to %c",n,a,c);
    TOH(n-1,b,a,c);
}
void main(){
    int n;
    printf("Enter the number of disk:");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}