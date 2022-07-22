// find strings are anagrams or not.
#include<stdio.h>
#include<conio.h>

void anagram(char a[], char b[])
{
    int len1,len2;
    len1 = strlen(a);
    len2 = strlen(b);

    if(len1!=len2)
    {
        printf("not Anagram");
    }
    else{
        for(int i=0;i<len1;i++)
    {
        for(int j=i+1;j<len1;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            if(b[i]>b[j])
            {
                int temp = b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for (int x = 0; x < strlen (a); x++)
    {
        // check string is equal or not
        if (a[x] != b[x])
        {
            printf (" The given strings are not an anagram of each other.");

        }
    }
    printf ( " Both strings are an anagram of each other. ");
    }



}

int main(){
    char str1[100],str2[100];
    gets(str1);
    printf("\n");
    gets(str2);

    anagram(str1,str2);
}

