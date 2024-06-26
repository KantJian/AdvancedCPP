// const_cast
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
    //HellTest->Init();//报错，因为Init()不是const 加上const就能调用了，但是我们没有const时怎么访问 需要const_cast进行转换
    FHelloTest* Test= const_cast<FHelloTest*>(HellTest);//这种转换代表去掉const的意思
    Test->Init();
    delete HellTest;
    return 0;
}
