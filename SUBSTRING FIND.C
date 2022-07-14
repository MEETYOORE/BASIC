#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j=0,b=0,d=0,a;
    char word[100],str[100];

    printf("enter the string:");
    gets(str);

    printf("enter the substring:");
    gets(word);

    n=strlen(str);
    m=strlen(word);

    for(i=0;i<n;i++)
    {
        a=i;
        while(j<m)
        {
            if(str[a]=word[j])
          {
              a++;
              j++;
              b++;
          }
        }
        j=0;
        if(b%m==0) d=b/m;
    }




    printf("the word '%s' occurs %d times",word,d);

    return 0;
}
