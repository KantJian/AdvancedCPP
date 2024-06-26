// reinterpret_cast
#include <iostream>
using namespace std;
class FHelloTest
{
public:
    FHelloTest();
    //void Init();
    void Init(); //const;
private:
    int a;
    int b;
    float aa;
}; 
FHelloTest::FHelloTest()//构造函数
{
    a=0;
    b=10;
    aa=10.f;
}
void FHelloTest::Init() //const//加上const
{
    auto Hello_la=[&]()  
    {
        cout<<a<<endl;
    };
    //加返回值的话需要 ->type
    auto Hello_la2=[&]()  ->bool
    {
        cout<<b<<endl;
        return true;
    };
    Hello_la();
    //Hello_la2();
    if (bool bHello = Hello_la2())
    {
        cout<<(bHello?"TRUE":"FALSE")<<endl;
    }
}
int main(){
    const FHelloTest* HellTest=new FHelloTest();
    //C风格的强转
    FHelloTest* NewTest=(FHelloTest*)HellTest;
    NewTest->Init();
    //reinterpret_cast  用于将一个指针转换成另一种指针类型，或者将一个指针转换为一个整数，
    //反之亦然。它是最强大、最不安全的类型转换方式，因为它直接重新解释对象的位模式而不进行任何类型检查或转换。
    int* a=reinterpret_cast<int*>(NewTest);//把NewTest转换为int 或  int*
    FHelloTest* a1=reinterpret_cast<FHelloTest*>(a);//把a重新转换成FHelloTest*
    a1->Init();

    return 0;
}
