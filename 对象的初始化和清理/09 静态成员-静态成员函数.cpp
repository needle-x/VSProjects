#include<iostream>
using namespace std;

class Person
{
public:
	static int m_A;
	static void func()
	{
		m_A = 100;
		//m_B = 200;//��̬��Ա���� �����Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ�����ĳ�Ա
		cout << "static void func����" << endl;
	}

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2����" << endl;
	}
};
int Person::m_A = 0;
int m_B;

void test01()
{
	//��̬��Ա�������ַ��ʷ�ʽ
	//1.ͨ������
	Person p;
	p.func();
	

	//2.ͨ������
	Person::func() ;
	//Person::func2();//������ʲ���˽�о�̬��Ա����
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