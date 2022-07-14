#include<stdio.h>
#include<math.h>

void insert(int *array,int pos,int size,int insert)
{
    int i;

    for(i=size;i>pos;i--)
    {
        *(array+i)=*(array+i-1);
    }

    *(array+pos)=insert;
}

int main()
{
    int i,j,k,arr[100],n,ins,position;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }

    printf("\nnumber to insert:");

    scanf("%d",&ins);

    printf("\position to insert:");

    scanf("%d",&position);

    insert(arr,position,n,ins);

    for(i=0;i<n+1;i++)
    {
        printf("%d ",*(arr+i));
    }

    return 0;

}
