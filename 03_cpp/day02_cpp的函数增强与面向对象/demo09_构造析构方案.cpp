#include "iostream"
using namespace std;

class Test
{
public:
	//���캯�� �޲ι��캯�� Ĭ�Ϲ��캯��
	//
	Test()
	{
		a = 10;
	}

	//�������Ĺ��캯��
	//���÷���3��
	Test(int mya)
	{
		a = mya;
	}

	//�����г�ʼ������ķ���
	//��ֵ���캯�� copy���캯��
	//copy���캯�����÷� 4��Ӧ�ó���
	Test(const Test & obj)
	{
		;
	}

protected:
private:
	int a;
};
void main()
{
	//1 ����
	Test t1(10); //c++Ĭ�ϵ����вι��캯�� �Զ�����
	// =
	Test t2 = 11; //c++Ĭ�ϵ����вι��캯���Զ�����

	//�ֹ���
	Test t3 = Test(12); //���ǳ���Ա�ֶ����ù��캯��


	system("pause");
}