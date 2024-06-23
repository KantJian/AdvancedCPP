//友元函数
#include <iostream>
using namespace std;


class FTest3
{
public:
    friend void Printf_f(FTest3 &T)
    {
        T.Hello();
        printf("%d \n",T.a);
        printf("%d \n",T.b);
    }
private:
    void Hello()
    {
        a=0;
        b=10;
    }
private:
    int a;
    int b;
};

int main(){
    FTest3 T3;
    Printf_f(T3);
    return 0;
}