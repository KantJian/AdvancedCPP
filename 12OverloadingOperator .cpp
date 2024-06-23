//重载操作符
#define _CRT_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
namespace AssetHello
{
    class Fistream
    {
    public:
        Fistream()
        {
           memset(&m_string,0,1024); 
        }
        void Print()
        {
            printf(m_string);
        }
        Fistream& operator=(const char *p)
        {
            strcpy(m_string,p);
            return *this;
        }
        
        
        
        
        Fistream& operator<<(const char *p)
        {
            printf(p);
            return *this;
        }
        Fistream& operator<<(const Fistream &p)
        {
            printf("\n");
            return *this;
        }
         Fistream& operator<<(const int p)
        {
            printf("%d",p);
            return *this;
        }
           Fistream& operator<<(const float p)
        {
            printf("%f",p);
            return *this;
        }
           Fistream& operator<<(const double p)
        {
            printf("%le",p);
            return *this;
        }
    private:
        char m_string[1024];
    };
    Fistream printcout;
    Fistream endcout;
}
int main(){
    //定义自己的打印方式
    AssetHello::printcout<<"Hello"<<AssetHello::endcout;
    AssetHello::printcout<<1<<2<<5<<AssetHello::endcout;
    AssetHello::printcout<<1.2f<<1.1f<<AssetHello::endcout;
    AssetHello::printcout<<1.222323222222<<1.00001324<<AssetHello::endcout;

    // AssetHello::printcout="123456";
    // AssetHello::printcout.Print();
    (AssetHello::printcout="123456").Print();
    return 0;
}