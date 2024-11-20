//week11-4b.cpp Part2: 剝皮法
#include <iostream>
using namespace std;
int f(int n) //Part2: 剝皮法
{
	int ans=0;
	while(n>0)
	{
		ans += n%10;
		n/=10;
	}
	return ans;
}
int main()
{
	int n;
	while(cin >> n)
	{
		if(n==0) break;
		n = f(f(f(n)));//Part2: 剝皮法 function
		
		cout << n << endl;
	}
}