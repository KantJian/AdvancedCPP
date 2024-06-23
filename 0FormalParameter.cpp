//C++ 形参
#include <iostream>
using namespace std;

struct FHello
{
	int a;
	int b;
	long int c;
};

void Fun(FHello &cc) {//C++支持传引用 不需要拷贝 C语言不支持
	cc.a = 0;
}
//引用的特性
//引用必须初始化
//唯一性

//底层实现的方式是一样的 按指针方式实现


int main() {
	FHello o;
	FHello& o1 = o;
	//FHello& o2 = NULL;//崩溃
	Fun(o);
	return 0;
}