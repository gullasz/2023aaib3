#include <iostream>
using namespace std;

///CodeBlocks自動加下括號、分號
class Mouse{
public:
    void print()
    {
        cout << "I am a mouse,squeak squeak.\n";
    }
};
class Cat{
public:
    void print()
    {
        cout << "I am a cat,meow meow.\n";
    }
};
int main()
{
    Mouse mouse1,mouse2;
    Cat cat1,cat2;
    mouse1.print();
    mouse2.print();
    cat1.print();
    cat2.print();
}
