//普通函数内的Lambda技巧
#include <iostream>
using namespace std;
int main(){
    //最简单的一个函数
    auto Hello1=[]()
    {
        printf("Hello World~");
    };
    Hello1();

    //auto 意思是任意类型 可以自动匹配  []里面是当前作用域需不需要传内容 暂时先不管它 （）里面是参数
    auto Hello2=[](char* buff) 
    {
        printf("%s~\n",buff);
    };
    char buffer[1024]="Hello";
    Hello2(buffer);

    //Lambda可以嵌套Lambda
    auto Hello3=[](char* buff) 
    {
        auto Hello4=[](char* buff) 
        {
            printf("%s~\n",buff);
        };
        Hello4(buff);
    };
    Hello3(buffer);

    //char buffer_C[1024]="Hello zhelifangkuohaozhongchuanzhi \n";
    //[] 里面的内容自动会补一个const 
    // auto value=[buffer_C](char* buff)//  [&]访问函数中所有
    // {
    //     printf("%s~ \n",buff);
    // };
    // value(buffer_C);
    
    return 0;
}


