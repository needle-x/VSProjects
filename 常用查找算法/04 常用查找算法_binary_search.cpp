#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//常用查找算法
//binary_search
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//v.push_back(2);//如果是无序序列，结果未知！
//	//与binary_search底层实现有关，指数级速度
//
//	//查找容器中是否有9元素
//	//注意：容器必须是有序的序列
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "找到了元素" << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}