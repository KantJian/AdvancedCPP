//类的虚继承
#include <iostream>
using namespace std;

class A
{
 public:
    A()
    {
        printf("Hello -A  \n");
    }

    void Hello()
    {
        printf("Hello ()  \n");
    }

};

class B:virtual public A
{
public:
    B()
        :A() 
    {}

};

class C:virtual public A
{
public:
    C()
        :A() 
    {}
};

class  D:public B,public C
{
public:
    D() 
        :B(),C()
    {

    };
    ~D() {};
};



int main(){

    D d;
    d.Hello();
    return 0;

}