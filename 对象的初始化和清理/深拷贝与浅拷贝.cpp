//#include<iostream>
//using namespace std;
//
//
//class Person {
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
//	}
//
//	Person(int a, int height)
//	{
//		age = a;
//		m_height = new int(height);   //new int(height)���ص���height�ĵ�ַ
//		cout << "�вι��캯���ĵ���" << endl;
//	}
//
//	//ǳ����   
//	//������Ĭ�ϵĿ������캯������ǳ����
//	//�����ڴ��ظ��ͷŴ���������
//	//Person(const Person& p)   
//	//{
//	// age = p.age;
//	// m_height=p.m_height;
//	// cout << "�������캯���ĵ���" << endl;
//	//}
//
//	/*���
//	���ǳ��������������*/
//
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "�������캯���ĵ���" << endl;
//		m_height = new int(*p.m_height);  //��Ҫ����һ�䲻һ����Ϊ�¿�������������һ���µĵ�ַ
//	}
//
//	~Person()
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//	}
//
//	int age;//����
//	int* m_height;//���ָ��
//
//};
//
//
////void test01()
////{
//// Person p1;
//// Person p2(20);
//// cout << "�����ǣ�" << p2.age << endl;
//// Person p3(p2);
//// cout << "�����ǣ�" << p3.age << endl;
////}
//
//void test02()
//{
//	Person p1(20, 175);
//	Person p2(p1);
//	cout << "p1�����ǣ�" << p1.age << endl;
//	cout << "p2�����ǣ�" << p2.age << endl;
//	cout << "p1����ǣ�" << *p1.m_height << endl;  //p1.m_height���ص���ָ��
//	cout << "p2����ǣ�" << *p2.m_height << endl;  //�����ǳ�����Ļ����ͻ����������
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}