///複習string 及 iostream cin cout
#include <iostream>
#include <string>
using namespace std;///引用命名空間std 之後就不用寫std::cin、std::string、std::cout
int main()
{
    string s;
    cout << "請輸入一個很長的字串中間不要有空格:";
    cin >> s;
    cout << "字串" << s << "的長度是" << s.length() << "\n";
    for(int i=0; i<s.length(); i++)
    {
        cout << i << ":" << s[i] << endl; /// endl 就是 "\n"
    }
}
