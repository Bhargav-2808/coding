//*
//**
//***
//****
//*****
//****
//***
//**
//*

#include<stdio.h>
int pattern(int n)
{
    for(int i=1;i<n;i++)
    {
        int k;
        if(i<=5)
        {
            k=i;
        }
        else{
            k=n-i;
        }

        //i<=5?k=i:k=n-i;
        for(int j=1;j<=k;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    pattern(10);
}

