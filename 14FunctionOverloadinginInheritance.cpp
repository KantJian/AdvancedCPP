//继承中的函数重载
#include <iostream>
using namespace std;

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
class FB:public FA
{
public:
    //void Func1();
};

int main(){
    FB A;
    A.Func1();
    A.Func1(1,2);
    return 0;
}