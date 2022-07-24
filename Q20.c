// How do you find the missing number in a given integer array
#include<stdio.h>
#include<conio.h>


int find_missing()
{
    int a[]={1,2,3,5,6,7,8};
    int sum=0;
    int len = (sizeof(a)/sizeof(a[0]));
    for(int i=0;i<len-1;i++)
    {
        sum=sum+a[i];
    }
    int missing = ((len*(len+1))/2)-sum;
    return missing;
}

int main()
{
    printf("%d",find_missing());
    return ;
}
