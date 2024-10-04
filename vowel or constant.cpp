#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(isvowel(ch))
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c is not constant",ch);
	}
	return 0 ;
}
