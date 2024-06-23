//函数重载  静态多态
#include <iostream>
using namespace std;
// void Func1(...)//任意参 可以用‘...’
// {

// }
class FA
{
public:
    static void Func1()
    {

    }
    static void Func1(int a)
    {

    }
    static void Func1(int a,int b)
    {

    }
    static void Func1(int a,int b,int c)
    {

    }
};
int main(){
    FA::Func1();
    FA::Func1(1);
    FA::Func1(1,2);
    FA::Func1(1,2,3);
    return 0;
}