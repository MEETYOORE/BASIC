#include <stdio.h>
#include <stdlib.h>


void swap(int *p,int *q)
{
    int i;
     i=*p;
    *p=*q;
    *q= i;
}


int sort(int a[],int n)
{
    int i;

    if(n==1) return 0;

    else
    {
        for(i=0;i<n;i++)
        {
            if(a[n-1]<a[i])
            {
                swap(&a[n-1],&a[i]);
            }
        }
    }
    return(sort(a,n-1));
}

int main()
{
    int len,i,arr[100];

    scanf("%d",&len);

    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }

    sort(arr,len);

    printf("\n");

    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
