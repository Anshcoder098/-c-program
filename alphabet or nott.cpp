#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if (isalpha(ch))
	{
		printf("%c is alphabet",ch);
	}
	else
	{
		printf("%c is not alphabet",ch);
	}
	return 0 ;
}
