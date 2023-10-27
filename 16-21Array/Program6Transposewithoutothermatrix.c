#include<stdio.h>
void main(){
    int i,j,n,m,t;
    printf("Enter the rows and columns:");
    scanf("%d%d",&n,&m);
    int a[n][m];
    if (n!=m){
        printf("The matrix is not squarematrix");
    }
    else{
        printf("Enter elements of a[][] matrix:");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&a[i][j]);
                // at[j][i]=a[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if((i!=j)&&(i>j)){
                    t= a[i][j];
                    a[i][j]=a[j][i];
                    a[j][i]=t;
                }
                // a[j][i]=a[i][j];
            }
        }
        
        printf("The transpose of a matrix:\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
}