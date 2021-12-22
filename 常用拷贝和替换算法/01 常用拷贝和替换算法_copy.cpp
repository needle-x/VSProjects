#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//常用拷贝和替换算法_copy
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>v2;
	v2.resize(v1.size());//利用copy算法在拷贝时，目标容器记得提前开辟空间
	copy(v1.begin(),v1.end(),v2.begin());
	for_each(v2.begin(),v2.end(),myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}