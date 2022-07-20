#include<stdio.h>
#include<conio.h>

//find GCD and LCM
int GCD(int,int);
int main(){
    int a[] = {35,5,30};
    int gcd=a[0];
    int lcm =a[0];
    for(int i=1;i<sizeof(a)/sizeof(a[0]);i++)
    {
        gcd=GCD(a[i],lcm);
        lcm=((a[i]*lcm)/gcd);
    }
    printf("%d\n",gcd);
    printf("%d",lcm);
    return 0;
}

int GCD(int a, int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}
