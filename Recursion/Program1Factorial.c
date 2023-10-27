#include<stdio.h>
// simple recursion
int factorial(int n){
    if (n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",factorial(n));
}

// Tail recursion
int fact(int n, int f){
    if (n==1){
      return f;
    }
    return fact(n-1, f*n);

}
void main() {
    printf("\nFactorial of %d is :%d",3 ,fact(3,1) );
}
