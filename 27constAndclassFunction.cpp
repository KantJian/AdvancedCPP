// const和类函数连用的高效策略
#include <iostream>
using namespace std;


static FHelloStruct s;
class FTestConst
{
public:
    void Init() const {};
    void Init2(){};
    void Init1() const 
    {
        s.a=0;//不能 修改a 但是可以修改全局对象s的
        Init();
        //Init2(); //Init2 不是const所以不能
    };
private:
    int a;
};

FTestConst ccc[10]; // 还未学C++的先用 C风格的容器

int main(){
    const FTestConst* CC=new FTestConst();
    CC->Init();
    CC->Init1();
    for(int i=0;i<10;i++)  
    {
        const FTestConst* AA=&ccc[i];
        AA->Init1();
    }
    return 0;
}
/*
FTestConst ccc[10]; 是一个C风格的数组，
包含10个FTestConst对象。即使数组元素是普通对象，
当你通过一个const指针访问这些对象时，
例如 const FTestConst* AA = &ccc[i];，你只能调用常量成员函数。
AA->Init1(); 通过const指针访问数组元素，
展示了如何在数组上下文中应用const关键字。
*/