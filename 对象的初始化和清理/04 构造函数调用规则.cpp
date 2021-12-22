//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////	cout << "p2的年龄为：" << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
//int main4()
//{
//	//test01();
//	test02();
//	//test03();
//	//Person p;
//
//	system("pause");
//	return 0;
//}