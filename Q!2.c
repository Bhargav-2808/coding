#include<stdio.h>
#include<string.h>

void revs(char c)
{
    int temp;
    for(int i=0;i<(strlen(c)/2);i++)
    {
        temp=c[i];
        c[i]=c[strlen(c)-i-1];
        c[strlen(c)-i-1]=temp;
    }
}


void rec(char c)
{
    int temp,i;
    if(i<strlen(c))
    {
        temp=c[i];
        c[i]=c[strlen(c)-i-1];
        c[strlen(c)-i-1]=temp;
        i++;
    }
    rec(c);

}

int main()
{
    char c[100];
    gets(c);

    //revs(c);
    rec(c);
    printf("%s ", c);
    return 0;
}

