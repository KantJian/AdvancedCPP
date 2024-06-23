//多继承
#include <iostream>
using namespace std;

class UObject {
public:
    void Destory(){}
};

class AActor:public UObject
{
public:
    void Start(){}
    void End(){}
    void Net(){}
};

class IPhysics//管理物理的接口
{
public:
    void Simulate(){}//模拟物理
};

class IAttack//攻击接口
{
public:
    void AttackTarget(class ACharacter *InTarget){}
};


// void UHello():public UObject
// {

// }

//多继承一定要注意：菱形问题 不知道继承的哪个 UHello和UActor父类都是UObject
class ACharacter:public AActor,public IPhysics,public IAttack//,public UHello
{

};

bool IsSimulate(IPhysics* p)
{
    if (p)
    {
        p->Simulate();
    }
    
    return true;
}

int main(){
    ACharacter A;
    ACharacter B;
    A.Simulate();
    A.AttackTarget(&B);
    IPhysics* P=&A;
    IAttack* P1=&A;
    AActor* P2=&A;
    IsSimulate(&A);
    return 0;
}