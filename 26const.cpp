// const
#include <iostream>
using namespace std;

class FHelloTest
{

};

 const int aa11=0;

void Fun(const int a)
{
    //a=100;//错误 有了const 形参不能被修改 保证当前形参的安全性
}

void Fun1(const int a,const FHelloTest *Ptr)
{
    //Ptr.a=10;//错误 const指针Ptr里面的值不能被修改 只能访问获取，但是不能修改值
    Ptr = new FHelloTest();
}

class FL1111
{
public:
    FL1111()
        ：m_ptr(nullptr)
        //，m_ptrRef(NULL)//引用不能为NULL 会崩溃的 必须有值
    {
        //m_ptr=NULL;
    }
    const FHelloTest* m_ptr;
    //const FHelloTest& m_ptrRef; //引用

};

struct FHelloStruct
{
    int a;
    int b;
    int c;
    int d;
};

void Fun2(const int a,const FHelloTest* Ptr,const FHelloStruct &InHello) //引用 相当于起了个别名 直接引用 没有消耗 指针有4个字节的消耗
{

}

int main(){
   
    //aa11=10; // 错误  const 不能被修改
    FL1111* cc=new FL1111();
    cc->m_ptr=new FHelloTest();
    //cc->m_ptr->a=10;//错误 不能被修改
    return 0;
}