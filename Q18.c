//20> How do you count the occurrence of a given character in a string?
#include<stdio.h>
#include<string.h>

int occ(char ch[], char cha)
{
    int count=0;
    for(int i=0;i<strlen(ch);i++)
    {

            if(ch[i]==cha)
            {
                count++;
            }

    }
    return count;

}
int main(){
    char str[100];
    char cha;
    gets(str);
    scanf("%c",&cha);
    printf("%d",occ(str,cha));
    return 0;
}

