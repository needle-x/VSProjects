#include<iostream>
using namespace std;

class Building;
class goodGay
{
public:
	goodGay();
	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���Building��˽�г�Ա
	Building* building;
};

class Building
{
	//���߱����� goodGay���µ�visit��Ա������Ϊ����ĺ�����
	friend void goodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//����д��Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
goodGay::goodGay()
{
	//�������������
	building = new Building;
}

void goodGay::visit()
{
	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void goodGay::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
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