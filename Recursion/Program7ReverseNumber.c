#include<stdio.h>
int rev(int n){
    if (n==0){
        return 1;
    }
    return ((rev(n/10)+10)*(n%10));
}
void main(){
    int num;
    printf("Enter a number: ");scanf("%d",&num);
    printf("\nReversed Number is %d",rev(num));
}