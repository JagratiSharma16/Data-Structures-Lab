#include<stdio.h>
void main(){
    int i,j,n,m;
    printf("Enter the rows and columns:");
    scanf("%d%d",&n,&m);
    int a[n][m], at[n][m];
    if (n!=m){
        printf("The matrix is not squarematrix");
    }
    else{
        printf("Enter elements of a[][] matrix:");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&a[i][j]);
                at[j][i]=a[i][j];
            }
        }
        printf("The transpose of a matrix:\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d\t",at[i][j]);
            }
            printf("\n");
        }
    }
}