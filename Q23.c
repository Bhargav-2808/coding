//binary search the array
#include<stdio.h>
#include<conio.h>


int binary(int a[],int start, int end , int element)
{
    int mid = (start+end)/2;
    if(element<a[mid])return binary(a,start,mid-1,element);
    if(element>a[mid])return binary(a,mid+1,end,element);
    if(element==a[mid])return mid;
    return -1;
}

int main()
{
    int a[] = {1,5,6,17,19,20,22};
    int len = sizeof(a)/sizeof(a[0]);
    int ind =binary(a,0,len-1,22);
    if(ind==-1)
    {
        printf("no index found");

    }
    else
    {
         printf(" %d ", ind);
    }

    return 0;
}
