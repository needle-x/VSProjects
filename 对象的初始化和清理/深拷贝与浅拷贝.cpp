//#include<iostream>
//using namespace std;
//
//
//class Person {
//public:
//	Person()
//	{
//		cout << "默认构造函数的调用" << endl;
//	}
//
//	Person(int a, int height)
//	{
//		age = a;
//		m_height = new int(height);   //new int(height)返回的是height的地址
//		cout << "有参构造函数的调用" << endl;
//	}
//
//	//浅拷贝   
//	//编译器默认的拷贝构造函数就是浅拷贝
//	//堆区内存重复释放带来的问题
//	//Person(const Person& p)   
//	//{
//	// age = p.age;
//	// m_height=p.m_height;
//	// cout << "拷贝构造函数的调用" << endl;
//	//}
//
//	/*深拷贝
//	解决浅拷贝带来的问题*/
//
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "拷贝构造函数的调用" << endl;
//		m_height = new int(*p.m_height);  //主要是这一句不一样，为新拷贝的类设置了一个新的地址
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
//	int age;//年龄
//	int* m_height;//身高指针
//
//};
//
//
////void test01()
////{
//// Person p1;
//// Person p2(20);
//// cout << "年龄是：" << p2.age << endl;
//// Person p3(p2);
//// cout << "年龄是：" << p3.age << endl;
////}
//
//void test02()
//{
//	Person p1(20, 175);
//	Person p2(p1);
//	cout << "p1年龄是：" << p1.age << endl;
//	cout << "p2年龄是：" << p2.age << endl;
//	cout << "p1身高是：" << *p1.m_height << endl;  //p1.m_height返回的是指针
//	cout << "p2身高是：" << *p2.m_height << endl;  //如果用浅拷贝的话会冲突，用深拷贝解决
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