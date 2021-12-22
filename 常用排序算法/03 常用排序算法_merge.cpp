#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>
//常用排序算法 merge
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	//有序序列且排序情况需一致（升序或者降序）
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+1);
	}
	//sort(v2.begin(), v2.end(), greater<int>());//v2降序，程序崩溃
	//目标容器
	vector<int>vTarget;

	//提前给目标容器分配空间
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}