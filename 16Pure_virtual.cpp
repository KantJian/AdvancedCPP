//纯虚函数  接口
#include <iostream>
using namespace std;

class IInterface
{
public:
    virtual void Init()=0;//纯虚函数 =0
    virtual void Destroy()=0;
};

class FNewObject:public IInterface
{
public:
    FNewObject(){}
    virtual void Init();
    virtual void Destroy();
};
void FNewObject::Init()
{

}
void FNewObject::Destroy()
{

}

int main(){
    FNewObject Obj;

    return 0;
}
