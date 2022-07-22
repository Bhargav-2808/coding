// How do you check if a string contains only digits?
#include<stdio.h>
#include<string.h>


void check(char ch[]){
    int count=0;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]>'0' && ch[i]<'9')
        {
            count++;
        }
    }
    if(count==strlen(ch))
    {
        printf("digit");
    }
    else
    {
        printf("not digit");
    }
}

int main(){
    char str[100];
    gets(str);
    check(str);
}
