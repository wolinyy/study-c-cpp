#include <iostream>

using namespace std;

/*
register�ؼ��ֵı仯
register�ؼ������󡰱����������ֲ������洢�ڼĴ�����
C�������޷�ȡ��register������ַ
��C++����Ȼ֧��register�ؼ���
C++���������Լ����Ż���ʽ����ʹ��registerҲ�������Ż�
C++�п���ȡ��register�����ĵ�ַ
//2
C++���������ֳ�������Ҫȡregister�����ĵ�ַʱ��register�Ա��������������Ч��

//3
����C���Ա���������Դ�������Ż������register������һ���ܺõĲ��䡣
*/

void main()
{
	register int i = 100;
	cout << i << endl;
	cout << &i << endl;
	system("pause");
}