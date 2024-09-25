///除惡務盡，但無法執行
///因為 range-based for迴圈必須在 C++11(2011之後)才能用
///如果使用C++98(1998年版)會無法正確編譯
///CodeBlocks 17.12裡 Setting-Compiler勾選第二個 -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;

	for(char c : s)
	{
		if(c != '2')
		{
			cout << c;
		}
	}
	cout << endl;
}
