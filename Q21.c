//find duplicate in given array;
#include<stdio.h>
#include<conio.h>

int dup()
{
    int a[]={1,2};
    int len= sizeof(a)/sizeof(a[0]);
    for(int i=0;len;i++)
    {
        int count=0;
        for(int j =i+1;j<len;j++)
        {
            if(a[j]==a[i] && a[j]!=0)
            {
                count++;
                a[j]=0;
            }
        }
        if(count>0 && a[i]!=0)
        {
            printf(" %d ", a[i]);
        }
        else{
            printf("no duplicate found");
            break;
        }
    }
}

int main()
{
    dup();
    return 0;
}

