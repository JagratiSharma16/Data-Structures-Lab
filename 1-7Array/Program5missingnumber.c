#include <stdio.h>
void main(){
    int n,i,sum=0,s,last;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int a[n];
    // last=a[n-1];
    // s=(last*(last+1))/2;
    s=((n+1)*(n+2))/2;
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("Missing number is:%d",s-sum);

}