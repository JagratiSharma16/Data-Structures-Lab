#include<stdio.h>
int sum(int n, int s){
    if(n==0){
        return s;
    }
    return sum(n/10, s+(n%10));
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits in %d is : %d",n,sum(n,0));
}