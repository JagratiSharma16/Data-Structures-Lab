#include <stdio.h>
void main(){
    int n,i,num,pos;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be inserted:");
    scanf("%d",&num);
    printf("Enter its postion:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=num;
    n++;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

}