#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	int getAge()
	{
		//m_Age = 0;
		return m_Age;
	}
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			cout << "你这个老妖精！" << endl;
			return;
		}
		else
		{
			m_Age = age;
		}
	}


	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	string m_Name;
	int m_Age;
	string m_Lover;
};


int main5()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;
	p.setAge(18);
	cout << "年龄为：" << p.getAge() << endl;

	p.setLover("jhjjj");

	system("pause");
	return 0;
}