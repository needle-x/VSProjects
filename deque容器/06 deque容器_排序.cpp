#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//deque��������
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);
	//���� Ĭ��������� ��С���� ����
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ��������sort��������
	sort(d.begin(),d.end());
	cout << "�����";
	printDeque(d);
}

int main()
{
	test01();
	//test02();
	//test03();
	system("pause");
	return 0;
}