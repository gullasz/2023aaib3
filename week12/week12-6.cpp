#include <iostream>
using namespace std;
int a[10000];
int main()
{
	int T,N;
	char c,c1;
	cin >> T;
	for(int t=1;t<=T;t++)
	{
		cin >> c >> c1 >> N;
		cout << "Test #" << t << ": ";
		int bad=0;
		for(int i=0;i<N*N;i++)
		{
			cin >> a[i];
			if(a[i]<0) bad=1;
		}
		for(int i=0;i<N*N;i++)
		{
			if(a[i]!=a[N*N-1-i]) 
			{
				bad=1;
			}
		}
		if(bad!=0)
		{
			cout << "Non-symmetric." << endl;
		}
		else
		{
			cout << "Symmetric." << endl;
		}
		
	}
}