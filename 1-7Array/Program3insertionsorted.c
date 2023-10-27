#include <stdio.h>
void main(){
    int n,i,j,num,pos=0;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be inserted:");
    scanf("%d",&num);
    // i=n-1;
    // while(a[i]>num){
    //     a[i+1]=a[i];
    //     i--;
    //     ++pos;
    // }
    // printf("pos=%d",pos);
    // a[pos]=num;
    for(i=0;i<n;i++)
    {
        if(num>a[i]&& num<a[i+1]){
            pos=i+1;
            for(j=n;j>=pos;j--)
            {
                a[j]=a[j-1];
                if(j==pos){
                    a[pos]=num;
                }
            }
            break;
        }
    }
    printf("The new array is:");
    for(i=0;i<=n;i++){
        printf("%d",a[i]);
    }
}