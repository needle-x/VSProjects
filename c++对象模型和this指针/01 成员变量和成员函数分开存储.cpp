#include<iostream>
using namespace std;

class Person
{
	int m_A; //�Ǿ�̬��Ա���� ������Ķ���
	static int m_B;//��̬��Ա���� ��������Ķ���

	void func() {}//�Ǿ�̬��Ա���� ��������Ķ���
	static void func2() {}//��̬��Ա���� ��������Ķ���

};
int Person::m_B = 0;

//void test01()
//{
//	Person p;
//	//�ն���ռ���ڴ�ռ�Ϊ��1
//	//c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ���и���һ�޶����ڴ��ַ 
//	cout << "size of p = " << sizeof(p) << endl;
//}

//void test02()
//{
//	Person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}

int main1()
{
	//test01();
	//test02();
	system("pause");
	return 0;
}