///���c�ȺɡA���L�k����
///�]�� range-based for�j�饲���b C++11(2011����)�~���
///�p�G�ϥ�C++98(1998�~��)�|�L�k���T�sĶ
///CodeBlocks 17.12�� Setting-Compiler�Ŀ�ĤG�� -std=c++11
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
