//类
#include <iostream>
using namespace std;

int Hello3() {
	return 1 + 3;
}

class FMonster {
public:
	FMonster();
	~FMonster();
	int a;
	int b;

	static int Hello3() { return 4; }//静态成员函数不依赖于类的实例，可以通过类名直接调用。
	int Hello4() {
		FMonster::Hello3();
		return 4;
	}
};
FMonster::FMonster()
{
	int cc= ::Hello3(); // ::调用全局，省略也可以 毕竟全局了。
	cout << cc << endl;
}
FMonster::~FMonster()
{

}

void main() {

	FMonster::Hello3();
	system("pause");
}
