#include<iostream>
using namespace std;

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}


	string m_PName;


};

class Person
{
public:
	Person(string name,string pName):m_Name(name),m_Phone(pName)//Phone m_Phone = pName 隐式转换法
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	string m_Name;
	Phone m_Phone;

};

//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << "手机" << endl;
//}

int main7()
{
	//test01();
	//test02();
	//test03();
	//Person p;

	system("pause");
	return 0;
}