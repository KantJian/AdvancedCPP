//面试必考的虚函数原理精讲
#include <iostream>
using namespace std;

class FHello
{
public:
    void Init(){}//4个字节
    virtual void Init(){}//8个字节
    virtual void Init1(){}//8个字节
    virtual void Init2(){}//8个字节
};
class FHello1:public FHello
{
private:
    int a;
};






int main(){
    FHello1 o;
    int len=sizeof(o);
    cout<<"大小："<<len<<endl;
    return 0;
}