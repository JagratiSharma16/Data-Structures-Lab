#include <stdio.h>
void main()
{
    int n, m, p, q, k, j, i, sum = 0,a[10][10],b[10][10],c[10][10];
    printf("Enter the values of m,n,p and q:");
    scanf("%d%d%d%d", &m, &n, &p, &q);
    // int a[m][n], b[p][q], c[m][q];
    if (n == p)
    {
        printf("Matrix 1:");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Matrix2:");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < n; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        printf("The multiplied matrix is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible.");
    }
}
