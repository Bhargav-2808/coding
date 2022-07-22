
// C program to reverse a string using recursion
# include <stdio.h>

/* Function to print reverse of the passed string */
void reverse(char *str)
{
if (*str)
{
    printf(" %c ",*str);
	reverse(str+1);
	printf("%c", *str);
}
}

/* Driver program to test above function */
int main()
{
char a[100];
gets(a);
reverse(a);
return 0;
}
