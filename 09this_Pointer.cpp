//this 指针
#include <iostream>
using namespace std;

class FTestA
{
public:
    FTestA();
    int a;
    int b;
    int c;
};
FTestA::FTestA()
{
    this->a=11;//this 经常被隐藏掉 指向自己进行一个访问
}
const FTestA *TestA=NULL;//内容不能修改 指针能改

int main(){


    return 0;
}