#include <stdio.h>

void main()
{
    int temp, digit1, digit2, digit3;

    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for(int n=1;n<=1000;n++)  //suppose loop is at n = 371
    {
        if(n<=9)
        {
            printf("%d ",n);
        }
        else
        {
            digit1 = n % 10;   //digit1 = 371 % 10 = 1.
            digit2 = (n % 100 - digit1) / 10;  //digit2 = (371%100 – 1) / 10 = 7
            digit3 = (n % 1000 - digit2) /100; //digit3 = (371%1000 –7)/100 = 3
            temp = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
	    //(1*1*1) + (7*7*7) + (3*3*3) = 371
	if (temp == n)
            {
                printf("%d ", temp);
            }
        }
    }
}
