//类函数内的Lambda技巧
#include <iostream>
using namespace std;

class FHelloTest
{
public:
    FHelloTest();
    void Init();
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
void FHelloTest::Init()
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
    FHelloTest T;
    T.Init();       //[&] 可以直接访问到类中的a，b
    return 0;
}
