//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person���вι��캯������" << endl;
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�Ŀ������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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
////	cout << "p2������Ϊ��" << p2.m_Age << endl;
////}
//
//void test02()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
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