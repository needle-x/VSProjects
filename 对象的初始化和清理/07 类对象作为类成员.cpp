#include<iostream>
using namespace std;

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}


	string m_PName;


};

class Person
{
public:
	Person(string name,string pName):m_Name(name),m_Phone(pName)//Phone m_Phone = pName ��ʽת����
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	string m_Name;
	Phone m_Phone;

};

//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << "�ֻ�" << endl;
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