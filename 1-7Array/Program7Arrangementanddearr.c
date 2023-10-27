#include <stdio.h>
void main(){
    int n,i,j,temp;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<(n/2);i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("The reversed array is:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}