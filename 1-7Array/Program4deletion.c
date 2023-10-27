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
    printf("Enter the number to be deleted:");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            pos=i;
            for(i=pos;i<n;i++){
                a[i]=a[i+1];
            }
        }
    }
    printf("The new array is:");
    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
}