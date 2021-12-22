#include<iostream>
using namespace std;

class Building;
class goodGay
{
public:
	goodGay();
	void visit();//让visit函数可以访问Building中私有成员
	void visit2();//让visit2函数不可以访问Building中私有成员
	Building* building;
};

class Building
{
	//告诉编译器 goodGay类下的visit成员函数作为本类的好朋友
	friend void goodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
goodGay::goodGay()
{
	//创建建筑物对象
	building = new Building;
}

void goodGay::visit()
{
	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
}
void goodGay::visit2()
{
	cout << "visit2函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	goodGay gg;
	gg.visit();
	gg.visit2();
}


int main()
{
	test01();
	system("pause");
	return 0;
}