#include <stdio.h>
void main()
{
    int i = 0, j = 0, k = 0, n, m, c[50];
    printf("Enter the size of two arrays:");
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    printf("Array 1:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array 2:");
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    i = 0;
    j = 0;
    while (i < n && j<m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (j < m)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    
    
    printf("The merged array is:");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    printf("The Union of two array is:");
    for (i = 0; i < k; i++)
    {
        if (c[i] == c[i+1])
        {
            continue;
        }
        else
        {
            printf("%d ", c[i]);
        }
    }
}