#include<iostream>
using namespace std;
class Person
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main3()
{
	Person p;
	p.m_Name = "����";

	system("pause");
	return 0;
}