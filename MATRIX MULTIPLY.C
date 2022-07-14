#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,l,q,p,row,col;

    printf("rows of matrix A:");
    scanf("%d",&m);

    printf("column of matrix A:");
    scanf("%d",&n);

    printf("enter elements of matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("rows of matrix B:");
    scanf("%d",&q);

    printf("columns of matrix B:");
    scanf("%d",&l);

    printf("enter elements of matrix B:\n");
    for(i=0;i<q;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    if(q!=n) printf("A x B not possible");

    if(q==n)
    {
        for(row=0;row<n;row++)
        {
            for(col=0;col<l;col++)
            {
                for(k=0;k<n;k++)
                {
                    c[row][col]+=a[row][k]*b[k][col];
                }
            }
        }
    }

    printf("A x B:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
