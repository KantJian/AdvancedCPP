//虚函数virtual 
#include <iostream>
using namespace std;
class FA
{
public:
   virtual void Func1()
   {
        printf("FA::Func1 \n");
   }
};
class FB:public FA
{
public:
    virtual void Func1() override
    {
        printf("FB::Func1 \n");

    }
};
int main(){
    FB A;
    A.Func1();

    FA* p=&A;
    p->Func1();
    return 0;
}