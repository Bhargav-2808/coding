//7 8 9 10
//4 5 6
//2 3
//1
#include<stdio.h>


int main()
{

    int n=10;
    for(int i=5;i>1;i--)
    {
        n=n-i+1;
        printf("i = %d , n=%d \n",i,n);
        for(int j=1;j<=i-1;j++)
        {
            n++;
            printf("%d ", n);
        }
        printf("i = %d , n=%d \n",i,n);
        n = n - i+1;
        printf("i = %d , n=%d \n",i,n);
        printf("\n");
    }
    return 0;
}
