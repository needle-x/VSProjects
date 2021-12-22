#include<iostream>
using namespace std;

class Cube 
{
public:
	void set_L(int l)
	{
		m_L = l;
	}
	int get_L()
	{
		return m_L;
	}

	void set_W(int w)
	{
		m_W = w;
	}
	int get_W()
	{
		return m_W;
	}

	void set_H(int h)
	{
		m_H = h;
	}
	int get_H()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}

	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	bool isSameByClass(Cube &c)
	{
		if (c.get_L() == m_L && c.get_W() == m_W && c.get_H() == m_H)
		{
			return true;
		}
		return false;
	}


private:
	int m_L;
	int m_W;
	int m_H;

};

bool isSame(Cube &c1, Cube &c2)
{
	if (c1.get_L() == c2.get_L() && c1.get_W() == c2.get_W() && c1.get_H() == c2.get_H())
	{
		return true;
	}

	return false;

}



int main6()
{
	Cube c1;
	c1.set_L(10);
	c1.set_W(10);
	c1.set_H(10);

	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	Cube c2;
	c2.set_L(10);
	c2.set_W(10);
	c2.set_H(10);

	bool ret = isSame(c1,c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "成员函数判断：c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断：c1和c2是不相等的" << endl;
	}
	system("pause");
	return 0;
}