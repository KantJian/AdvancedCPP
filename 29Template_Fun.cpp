//函数模板和任意参数结合的高级运用
#include <iostream>
using namespace std;
//函数模板 解决一些通用的方法 
template<class T>
class vector
{
public:
    const T *operator[](int Index) const
    {
        return &Data[Index];
    }
    int Num() const {return 0;}
private:
    T* Data;
};
template<typename T>
void Call_Array(vector<T>& InArray)    //这就是一个通用函数模板
{
    for (int i = 0; i <InArray.Num() ; i++)
    {
        T *Ptr=InArray[i];
        //逻辑...
    }
}
int main(){
    //以下为上一笔记中的代码
    // vector<int> array_int;
    // vector<float> array_f;
    // vector<double> array_d;
    // vector<FHello> array_data;
    // vector<FHello*> array_data1;
    Call_Array<int>(array_int); //   如果参数里面有类似vector<T> 有模板T了 可以省略掉<int>，                             
    Call_Array(array_f);        //   功能很强大，会自动匹配 算好的。UE里面就是这么干的。
    Call_Array(array_d);
    return 0;
}