#include <stdio.h>
void main(){
    int n,i,max;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    int DAT[max+1];
    for(i=0;i<max+1;i++){
        DAT[i]=0;
    }
    for(i=0;i<n-1;i++){
        DAT[a[i]]++;
    }
    for(i=0;i<max+1;i++){
        if(DAT[i]!=0){
        printf("%d occurred %d times.",i,DAT[i]);
        }
    }

}