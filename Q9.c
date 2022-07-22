// find the number is perfect sqrt is not.

#include<stdio.h>
#include<math.h>


int isSquar(int n)
{
    float x;
    int y;
    x=sqrt((double)n);
    y=x;
    if(y==x)
    {
        printf(" %d ",n);
    }

    return 0;
}

int main(){

    //print range between 1 to 1000
    for(int i=1;i<=1000;i++)
    {
        isSquar(i);
    }
    return 0;
}
