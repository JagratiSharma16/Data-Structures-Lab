#include<stdio.h>
// simple recursion
int pow( int b, int p){
    if (p==0){
        return 1;
    }
    return b*(pow(b,p-1));
}
void main(){
    printf("%d",pow(2,3) ); 
}
// tail recursion
int power(int b, int p, int n){
    if(p==0){
        return n;
    }
    return power(b, p-1,n*b);
}
void main(){
    printf("%d",power(5,3,1) ); 
}