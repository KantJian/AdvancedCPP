//类构造函数与析构函数
#include <iostream>
using namespace std;

class FTestA
{
public:
    FTestA();// 1
    FTestA(int Ina,int Inb,int Inc);//2
public:
    int a;
    int b;
    int c;
};

FTestA::FTestA()//初始化
{
    a=11;
    b=13;
    c=9;
}

FTestA::FTestA(int Ina,int Inb,int Inc)
{
    a=Ina;
    b=Inb;
    c=Inc;
}
/*初始化列表
    ：a（Ina）
    ，b（Inb）
    ，c（Inc）
*/

int main(){
    FTestA A;
    cout<<A.a<<A.b<<A.c<<endl;
    FTestA B(1,2,3);
    cout<<B.a<<B.b<<B.c<<endl;
    return 0;
}