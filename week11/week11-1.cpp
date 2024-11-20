#include <iostream>
#include <unordered_map>
///因為是++2021 不能直接在codeblock使用
///setting-compiler,加入c++11就可以了
using namespace std;

int main()
{
        unordered_map<int,int> table;
        table[9977341] = 9;
        table[4433997] = 4;
        cout << table[9977341] << endl;
        cout << table[4433997] << endl;
}
