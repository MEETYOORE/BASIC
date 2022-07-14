#include <stdio.h>
int gcd(int a,int b);

int main()
{
    int m,n;

    printf("enter the numbers in descending:\n");
    scanf("%d%d",&m,&n);

    printf("%d",gcd(m,n));

    return 0;
}


int gcd(int a,int b)
{
    if(a%b==0) return b;

    else return gcd(b,a%b);
}
