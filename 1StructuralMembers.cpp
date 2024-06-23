//结构体成员函数
#include <iostream>
using namespace std;

struct FHello{
	FHello() {
		//初始化 （构造函数）
	}
	~FHello()
	{
		//
	}

	int a;
	int b;
	float c;
	float d;
private:
	int m;
public:
	void Hello1() {
		int	a = 0;
		int b = 0;
		HHH();
	}
private:
	void HHH() {

	}
};



void main() {
	FHello Hello;
	Hello.Hello1();
	Hello.a = 0;
	int k = Hello.a;
	Hello.b;
	system("pause");
}