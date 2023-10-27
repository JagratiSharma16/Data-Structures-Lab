#include<stdio.h>
/*int fib(int n){
    if(n==1||n==2){
        return n-1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
void main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d %d\t",i,fib(i));
    }
}*/
long long int DAT[101];
int fib(int n){
    if (n==1 || n==2){
        return DAT[n]=n-1;
    }
    else{
        if(DAT[n]==0){
            DAT[n]=(fib(n-1)+fib(n-2));
        }
    }
    return DAT[n];
}
void main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d %d\t",i,fib(i));
    }
}