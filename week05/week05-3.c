//c
#include <stdio.h>
#include <ctype.h>//4.tolower(c)
int main()
{
	//3.keyboard
	char s[]="`12345678890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	//1.input
	while(scanf("%c",&c)==1)
	{
		c= tolower(c);
		if(c==' ' || c =='\n')printf("%c",c);
		else
		{
			for(int i=0; s[i]!=0;i++)//5.find c in s
			{
				if(c==s[i])printf("%c",s[i-2]);
			}
		}
		//printf("%c",c);//2.output
	}
}