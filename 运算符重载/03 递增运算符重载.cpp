#include<iostream>
using namespace std;


//重载递增运算符
//自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//重载前置++运算符 返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		//先进行++运算
		m_Num++;
		//再将自身做返回
		return *this;
	}



	//重载后置++运算符
	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
	//返回的是值而非引用 temp是一个局部对象，在当前函数执行结束后就被释放了，返回引用后的再操作非法
	MyInteger operator++(int)
	{
		//先记录当时结果
		MyInteger temp = *this;
		//后递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}


private:
	int m_Num;
};

//重载<<运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}


//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//
//}

int main3()
{
	/*test01();
	test02();*/
	system("pause");
	return 0;
}