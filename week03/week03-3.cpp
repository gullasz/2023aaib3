///�Ʋ�string �� iostream cin cout
#include <iostream>
#include <string>
using namespace std;///�ޥΩR�W�Ŷ�std ����N���μgstd::cin�Bstd::string�Bstd::cout
int main()
{
    string s;
    cout << "�п�J�@�ӫܪ����r�ꤤ�����n���Ů�:";
    cin >> s;
    cout << "�r��" << s << "�����׬O" << s.length() << "\n";
    for(int i=0; i<s.length(); i++)
    {
        cout << i << ":" << s[i] << endl; /// endl �N�O "\n"
    }
}
