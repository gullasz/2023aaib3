//cpp
#include <iostream>//cout
#include <stdio.h>//scanf()
#include <string>//isupper() tolower() find()
using namespace std;
int main()
{
	string s="`12345678890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;// 1:input
	while(scanf("%c",&c)==1)
	{
		c= tolower(c);
		if(c==' ' || c =='\n') cout << c;
		else
		{
			int i=s.find(c);
			cout << s[i-2];
		}
	}
}