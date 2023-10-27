// #include <stdio.h>
// void main()
// {
//     int i = 0, j = 0, k = 0, n, m;
//     printf("Enter the size of two arrays:");
//     scanf("%d%d", &n, &m);
//     int a[n], b[m], c[n + m];
//     printf("Array 1:");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Array 2:");
//     for (j = 0; j < m; j++)
//     {
//         scanf("%d", &b[j]);
//     }
//     i = 0;
//     j = 0;
//     while (i < n && j < m)
//     {
//         if (a[i] < b[j])
//         {
//             c[k] = a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             c[k] = b[j];
//             j++;
//             k++;
//         }
//     }

//     while (j < m)
//     {
//         c[k] = b[j];
//         k++;
//         j++;
//     }

//     while (i < n)
//     {
//         c[k] = a[i];
//         i++;
//         k++;
//     }
//     printf("The merged array is:");
//     for (i = 0; i < k; i++)
//     {
//         printf("%d ", c[i]);
//     }
//     printf("\n");
//     printf("The set difference(b-a) is:");
//     for (i = 0; i < k; i++)
//     {
//         if (c[i] == a[i] && c[i] != b[i] )
//         {
//             continue;
//         }
//         else
//         {
//             printf("%d", c[i]);
//         }
//     }
// }
// Set difference
#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,j;
    printf("Enter size of set A");
    scanf("%d",&n1);
    printf("Enter element of set");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B");
    scanf("%d",&n2);
    printf("Enter element of set");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);


    // logic for find A-B

    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
        
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }

    }

    // logic for find B-A

    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(b[i]==a[j])
             break;
        }
        if(j==n1)
        {
          
            for(l=0;l<m;l++)
            {
                if(d[l]==b[i])
                 break;
            }
            if(l==m)
            {
                d[m]=b[i];
                m++;
            }
        }

    }
     printf("Difference of A-B is:-\n");
     for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }
     printf("\n");
     printf("Difference of B-A is:-\n");
     for(i=0;i<m;i++)
     {
         printf("%d ",d[i]);
     }
    return 0;

}