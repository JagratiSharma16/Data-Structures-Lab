#include <stdio.h>
void main(){
    int i,j,n,m,t;
    printf("The rows and columns are:2 and 2\n");
    n=2;
    m=2;
    int a[n][m];
 
        printf("Enter elements of a[][] matrix:");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&a[i][j]);              
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                t=a[0][0]*a[1][1]+a[0][1]*a[1][0];          
            }
        }
        printf("The sum is:%d",t);
}