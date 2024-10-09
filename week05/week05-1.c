#include <stdio.h>
#include <ctype.h>
int main()
{
	char s[33];
	scanf("%s",s);
	for(int i=0;s[i]!=0;i++)
	{	
		char c=s[i];
		if(isupper(c)) c=tolower(c);
		else if(islower(c)) c=toupper(c);
		printf("%c",c);
	}
	printf("\n");
}