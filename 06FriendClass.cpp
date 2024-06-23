//友元类
#include <iostream>
using namespace std;
class FTestClass
{
    friend class FTest2;//是她闺蜜，相当于这个类就是她的，能调用这里面所有成员
public:
    void Hello(){}
private:
    void Hello1(){}
    void Hello2(){}
    void Hello3(){}
protected:
    void Hello4(){}
};
class FTest2
{
public:
    void Init()
    {
        Class.Hello();
        Class.Hello1();
        Class.Hello4();
    }
private:
    FTestClass Class;
};
int main(){

    FTest2 Test2;
    Test2.Init();
    return 0;
}