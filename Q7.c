// Find the prime factors of number
#include<stdio.h>

int prime_fact(int);
int prime (int);
int main(){
    //find the factors of num
    prime_fact(20);
}

int prime_fact(int num){
     for(int i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            int flag = 1;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(flag==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}

int prime(int n){
    if(n==1)
    {
       return 0;
    }
    int flag=0;
    //while(int x=0 <n){
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            //printf("hi %d ",n);
            flag=1;
            break;
        }

        if(flag==0)
        {
            printf(" %d ",n);
        }
    }


}
