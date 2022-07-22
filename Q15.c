// How do you find all the permutations of a string?
#include<stdio.h>
#include<conio.h>
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

/* Function to print permutations
of string
This function takes three parameters:
1. String
2. Starting index of the string
3. Ending index of the string. */
void permute(char *a, int l, int r)
{
	int i;
	if (l == r)
		printf("%s\n", a);
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a + l), (a + i));
			printf("1 %s %d %d %d\n",a,l,i,r);
			permute(a, l + 1, r);
            printf("2 %s %d %d %d\n",a,l,i,r);
			//backtrack
			swap((a + l), (a + i));
			printf("3 %s %d %d %d\n",a,l,i,r);
		}
	}
}

// Driver code
int main()
{
	char str[] = "ABC";
	int n = strlen(str);
	permute(str, 0, n-1);
	return 0;
}




