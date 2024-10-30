#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int m,n,a[20][20];
	cin >> m >> n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << endl;
	for(int j=0;j<n;j++)
	{
		for(int i=m-1;i>=0;i--)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}