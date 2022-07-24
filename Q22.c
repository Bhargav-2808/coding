//33> How do you find all pairs of an integer array whose sum is equal to a given number?
#include<stdio.h>
#include<conio.h>

int find_pair(int s)
{
    int a[]={1,2,3,6,10,12,13,4};
    int len = sizeof(a)/sizeof(a[0]);
    int temp_s=s;
    for(int i=0;i<len;i++)
    {
        int sum=0;
        for(int j=i+1;j<len;j++)
        {
            sum=a[i]+a[j];
            if(sum==temp_s)
            {
                printf(" %d %d ",a[i],a[j]);
            }
            else
            {
                printf("No pair found");
                return 0;
            }
        }

    }
    return 0;
}
int main()
{
    find_pair(1);
    return 0;
}
