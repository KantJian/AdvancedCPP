// namespace
#include <iostream>
using namespace std;
namespace AssetHello
{
    enum EHello
    {
        A,
        B,
    };
    struct FAssetHello
    {
        void Init();
        void Hello();
    };
    class IInterface
    {

    };
    class FHello:public IInterface
    {

    };
    //FHello* GetHello();
}

namespace AssetHello
{
    // FHello* GetHello()
    // {
    //  return Null;
    // }
}
namespace AssetHello
{
    class IInterface2
    {

    };
}
namespace AssetHello
{
    
}


int main(){
    //C++调用枚举
    AssetHello::EHello::A;
    return 0;
}