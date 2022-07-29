     //*
    //**
   //***
  //****
 //*****
#include<stdio.h>
int pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    pattern(5);
}

