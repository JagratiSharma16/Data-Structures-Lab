#include<stdio.h>
int gcd(int a, int b){
    if (a%b==0){
        return b;
    }
    return gcd(b,a%b);
}
void main(){
    printf("%d",gcd(69,33));
}
