//21> How do you print the first non-repeated character from a string?
#include<stdio.h>
#include<string.h>

int nocc(char ch[])
{
    int flag;
    for(int i=0;i<strlen(ch);i++)
    {
        flag=0;
        for(int j=0;j<strlen(ch);j++)
        {
            if((ch[i]==ch[j]) && i!=j)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf(" %c ",ch[i]);
            break;
        }
    }

 if (flag == 1) {
     printf("Didn't find any non-repeating character");
 }
}
int main(){
    char str[100];
    char cha;
    gets(str);
    nocc(str);
    return 0;
}
