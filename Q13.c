// Print duplicate char in String
#include<stdio.h>
#include<conio.h>

void dup(char ch[]){
    for(int i=0;i<strlen(ch); i++)
    {
        int count=1;
        for(int j=i+1;j<strlen(ch);j++)
        {
            if(ch[j]==ch[i] && ch[j]!=' ')
            {
                ch[j]='0';
                count++;
            }

        }
         if(count>1 && ch[i]!='0' )
        {
            printf("%c ",ch[i]);
        }

    }
}
int main()
{
    char c[100];
    gets(c);
    dup(c);
    return 0;
}
