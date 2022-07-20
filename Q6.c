//6> find the factorial of number with and without recursion
#include<stdio.h>

int fact(int);
int fact_rec(int);
int main()
{

    fact(3);
    int fc= fact_rec(3);
    printf(" %d ", fc);
}


int fact(int n)
{
    int mul=1;
    for(int i=1;i<n;i++)
    {
        mul=mul+mul*i;
    }
    printf("%d ",mul);


}

int fact_rec(int n)
{
    if(n==0)
    {
        printf("%d ",n);
        return 0;
    }

    else if(n==1)
    {
        printf("%d ",n);
        return 1;
    }

    else
    {
        printf("%d ",n);
        return n*fact_rec(n-1);
    }

}




