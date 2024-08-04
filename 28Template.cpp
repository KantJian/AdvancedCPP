//CPP为什么要引入模板
#include <iostream>
using namespace std;

// class vector
// {
// public:

// private:
//     int *data;
// };
// class vector1
// {
// public:

// private:
//     float *data;
// };
// class vector2
// {
// public:

// private:
//     double *data;
// };

//非常麻烦

//引入模板  编译器会自动生成上面的代码
//动态的帮我们生成代码
template<class T>
class vector
{
public:
private:
    T* Data;
};

class FHello{};

int main(){
    vector<int> array_int;
    vector<float> array_f;
    vector<double> array_d;
    vector<FHello> array_data;
    vector<FHello*> array_data1;
    return 0;
}