//final的用法
#include <iostream>
using namespace std;

class IInterface
{
public:
    virtual void Init()=0;
    virtual void Destroy()=0;
};
//class FNewObject final:public IInterface//也可以加类中，类终止，不能被继承了；
class FNewObject:public IInterface
{
public:
    FNewObject(){}
    virtual void Init() final;
    virtual void Destroy();
};
void FNewObject::Init()
{

}
void FNewObject::Destroy()
{

}
class FNewObject1:public FNewObject
{
public:
    FNewObject1(){}
    //virtual void Init(){}//报错了 无法重写final函数
    virtual void Destroy(){} 
};
int main(){
    FNewObject1 Obj;

    return 0;
}
