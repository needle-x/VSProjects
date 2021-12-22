#include<iostream>
using namespace std;

class Person
{
public:
	static int m_A;
	static void func()
	{
		m_A = 100;
		//m_B = 200;//静态成员函数 不可以访问非静态成员变量，无法区分到底是哪个对象的成员
		cout << "static void func调用" << endl;
	}

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}
};
int Person::m_A = 0;
int m_B;

void test01()
{
	//静态成员函数两种访问方式
	//1.通过对象
	Person p;
	p.func();
	

	//2.通过类名
	Person::func() ;
	//Person::func2();//类外访问不到私有静态成员函数
}


int main()
{
	test01();
	//test02();
	//test03();
	//Person p;

	system("pause");
	return 0;
}