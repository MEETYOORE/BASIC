#include <stdio.h>

long fact(long a)
{
    if (a==1)  return (1);
    else return(a * fact(a-1));
}

int main()
{
    int n;
    printf("enter limit:");
    scanf("%d",&n);

    printf("factorial %d is %d",n,fact(n));


    return 0;
}
