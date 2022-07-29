//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include<stdio.h>
int pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1,k=1;j<=i;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}

int main()
{
    pattern(5);
}
