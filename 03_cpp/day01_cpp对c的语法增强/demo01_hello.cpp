#include <iostream>		//c++��׼���������

using namespace std;	//ʹ��c++��׼�����ռ�

//C++��׼�����������
void demo01()
{
	// c++�����<<���Ʒ��Ž����˹�����ǿ--����������
	cout << "c++ hello" << endl;

	//����ʹ��ʱ����
	int i = 0;
	cin >> i;	//�Ӽ����������ݵ�������

	cout << "�������i��" << i << endl;

}

void demo02()
{
	double r = 0;
	double s = 0;
	cout << "��������Բ�İ뾶:";
	cin >> r;

	s = 3.14 * r * r;
	cout << "Բ�������" << s << endl;

}

//�൱�ڶ�Բ������һ�����ͳ���
//�������͵ı��ʣ��̶���С�ڴ��ı���
//�ڽṹ��������Է�װ���Ժͺ���
struct Circle
{
	double m_r;
	double m_s;

	void setR(double r)
	{
		m_r = r;
	}
	void prinfR()
	{
		printf("r:%d\n", m_r);
	}
	double getS()
	{
		m_s = 3.14 * m_r * m_r;
		return m_s;
	}

	//�����ʳ�Ա�����ĺ���
	int test()
	{
		int i = 1;
		return 1;
	}
};

void demo03()
{
	Circle c1;
	double r = 0;
	cout << "��������Բ�İ뾶";
	cin>>r;

	c1.setR(r);
	cout << "Բ�����:"<< c1.getS() << endl;;

	// �������͵ı��ʣ��̶���С�ڴ��ı��� �����Ĵ�С������������������ ������ʵ��
	cout << "sizeof(Circle):"<< sizeof(Circle) << endl;;
	cout << "sizeof(c1):"<< sizeof(c1) << endl;

	Circle *pC = NULL;
	cout << pC->test() << endl;
}

void main()
{
	//demo01();
	//demo02();
	demo03();

	system("pause");
}