#include "iostream"
using namespace std;

//��ʾ�ĳ�ʼ������
class  Test
{
public:
	void init(int mya)
	{
		a = mya;
	}
protected:
private:
	int a;
};

void main()
{
	Test t1;
	t1.init(10);
	//���������ŵĵط�

	//
	Test t11, t12, t13;
	t11.init(11);
	t12.init(12);
	t13.init(13);
	Test array[3999] = {t11, t12, t13};


	system("pause");
}