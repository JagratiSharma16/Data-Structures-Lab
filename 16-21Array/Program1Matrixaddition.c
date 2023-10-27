#include <stdio.h>
void main()
{
    int n, m, i, j;
    printf("Enter row and coloumn:");
    scanf("%d%d", &n, &m);
    int a[n][m], b[n][m], c[n][m];
    printf("Matrix 1: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 2: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The added matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
}
