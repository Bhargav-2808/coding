#include<stdio.h>
#include<string.h>


void swap(char *a,char *b)
{
    char temp =*a;
    *a=*b;
    *b=*a;
}
void rev(char str[],int l,int r)
{
     if (l >= r)
        {
            return;
        }
    //swap(&str[l],&str[r]);
    //int temp = str[l];
   //str[l] = str[r];
   //str[r] = temp;
    printf("16 %c %c \n",str[l],str[r]);
    rev(str,l+1,r-1);
    printf("18 %c %c",str[l],str[r]);


}

void rvereseArray(char arr[], int start, int end)
{
   int temp;
   if (start >= end)
     return;
   temp = arr[start];
   arr[start] = arr[end];
   arr[end] = temp;
   rvereseArray(arr, start+1, end-1);
}


int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);

    rev(str,0,len-1);
    printf(" %s ",str);
    return 0;
}
