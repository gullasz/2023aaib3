#include <iostream>
using namespace std;
int main()
{
	double h,m,BMI;
	cin >> h >> m;
	BMI=m/(h*h);
	cout << BMI << endl;
	if(BMI<18.5) cout << "too thin";
	else if(BMI<24) cout << "standard";
	else cout << "too fat";
}