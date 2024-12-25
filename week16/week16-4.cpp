#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now,ans=0;
	while(cin >> now)
	{
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	for(int n : a)
	{
		if(n==now) ans++;
	}
	cout << ans << endl;
}