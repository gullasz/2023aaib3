
#include <iostream>
#include <string>
using namespace std;
class Cat
{
public:
    string name;
    Cat(string _name) ///����غc�l constructor
    {
        name = _name;
    }///�S��return��
    void print()
    {
        cout << "My name is" + name +".\n";
    }
};
int main()
{
///�إX cat1�Bcat2�� �|�Ϋغc�l�⪫��غc�X��
    Cat cat1("�p��"),cat2("�p��");
    cat1.name = "�p��";
    cat1.print();
    cat2.name = "�p��";
    cat2.print();

}
