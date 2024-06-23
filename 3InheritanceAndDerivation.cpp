//类的继承与派生
#include <iostream>
using namespace std;

class FWorkers {//工人(基类)
public:
	void Work(){/*/../*/}
private:
	void Work1();
protected:
	void Work2();
};
//组装零件的
class FComponentWorkers :protected FWorkers
{
public:
	void Hello(){
		Work2();
		Work();
	}
};
// class FTest:public FComponentWorkers
// {
// public:
// 	void A(){
// 	//Work();// private继承 无法访问到
// 	//work2();//
// 	}
// };
//拼接的工人
class FSpliceWorkers :public FComponentWorkers
{
public:
	void Hello1()
	{
		Work();
		Work2();
	}
};

int main() {
	FComponentWorkers W1;
	W1.Hello();
	FSpliceWorkers W2;
	W2.Hello1();
	system("pause");
	return 0;
}

//protected 成员可以在派生类的成员函数中访问，但不能通过派生类的对象直接访问。

//父类的属性变为该继承类的属性（对应关系）
//public继承： 
		//1.public       public
		//2.private		 private
		//3.protected    protected

//protected继承： 外部无法访问父类的公共的接口 而我们自己内部可以访问的
		//1.public       protected
		//2.private		 private
		//3.protected    protected

//private继承：   
		//1.public       private
		//2.private		 private
		//3.protected    private
