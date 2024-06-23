//深拷贝和浅拷贝
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
int main(){
    FTestA A;
    cout<<A.a<<A.b<<A.c<<endl;
    FTestA B(1,2,3);
    //将B的值赋值给A
    //A=B;
    FTestA C(B);//这个就是浅拷贝，没写什么函数 将当前变量内存对齐的赋值
                //浅拷贝就是只会对我们当前的值进行拷贝
    cout<<C.a<<C.b<<C.c<<endl;
    return 0;
}