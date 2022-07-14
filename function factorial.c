
#include<stdio.h>

void dispPattern(void); // prototype
int main()
{
    printf("fn to display a line of stars\n");
    dispPattern();
    return 0;
}

    void dispPattern()
    {
        int i;
        for (i=1;i<=20 ; i++) printf("*");
    }

