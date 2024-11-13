
#include <iostream>
#include <string>
using namespace std;
class Cat
{
public:
    string name;
    Cat(string _name) ///物件建構子 constructor
    {
        name = _name;
    }///沒有return值
    void print()
    {
        cout << "My name is" + name +".\n";
    }
};
int main()
{
///建出 cat1、cat2時 會用建構子把物件建構出來
    Cat cat1("小白"),cat2("小花");
    cat1.name = "小花";
    cat1.print();
    cat2.name = "小白";
    cat2.print();

}
