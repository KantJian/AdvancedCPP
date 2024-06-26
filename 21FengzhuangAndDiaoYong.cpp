//封装 dll lib  调用


//头文件InterFace.h 中
//#pragma once
#ifndef INTERFACE_H  //其他文件包含这个头文件时，判断当前接口有没有被定义，有的话跳过，没有的话定义
#define INTERFACE_H
#define _CRT_SECURE_NO_WARNINGS
#define FENGZHUANGCPP_API __declspec(dllexport)//导出
//动态连接库
//静态连接库
class FENGZHUANGCPP_API IInterface
{
public:
	static IInterface* CreatInterface();
	virtual void Init() = 0;
	virtual void Destroy() = 0;
	virtual char* GetName() = 0;
};
#endif 
//source.cpp中
#include "InterFace.h"
#include <iostream>

class FHello :public IInterface
{
public:
	FHello();
	virtual void Init();
	virtual void Destroy();
	virtual char* GetName();
private:
	char Name[1024];
};
FHello::FHello()
{	
	memset(Name, 0, 1024);
	strcpy(Name, "Hello");
}
void FHello::Init()
{
	printf(" FHello::Init() \n");
}

void FHello::Destroy()
{
	printf(" FHello::Destroy() \n");
}

char* FHello::GetName()
{
	return Name;
}
IInterface* IInterface::CreatInterface()
{
	return new FHello();
}
//新建工程文件 导入dllib库 导入头文件 
#include "dlllib/InterFace.h"
#include <iostream>
#pragma comment(lib,"FengZhuangCPP.lib")
using namespace std;
int main()
{
	IInterface *IF= IInterface::CreatInterface();
	cout << IF->GetName() << endl;
	IF->Init();
	IF->Destroy();
	return 0;
}