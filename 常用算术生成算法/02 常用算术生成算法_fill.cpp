#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

void myPrint(int val)
{
	cout << val << " ";
}

//�������������㷨 fill
void test01()
{
	vector<int>v;
	v.resize(10);//Ĭ�����0
	//�����������
	fill(v.begin(),v.end(),100);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}