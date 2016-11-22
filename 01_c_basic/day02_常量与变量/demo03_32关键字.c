#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
auto �ֲ��������Զ����棩
break�������˳��������ڲ�ѭ��
case   switch�����ѡ����
char���ֽ���������
const���岻�ɸ��ĵĳ���ֵ
continue�жϱ���ѭ������ת����һ��ѭ��
default switch����е�Ĭ��ѡ����
do  ���ڹ���do.....whileѭ�����
double����˫���ȸ���������
else����if.....elseѡ�����ṹ
enumö��
extern����������ģ����˵����ȫ�ֱ���
float���嵥���ȸ���������
for����forѭ�����
goto����gotoת�ƽṹ
if����if....elseѡ��ṹ
int������������
long����������
registerCPU�ڲ��Ĵ�ı���
return���ڷ��غ����ķ���ֵ
short����������
signed�з�����
sizoef������ʽ���������͵�ռ���ֽ���
static���徲̬����
struct����ṹ��������
switch����switchѡ��ṹ
typedef���¶�����������
union������������
unsigned�����޷�������
void��������������
volatile�ñ����ڳ�����ִ���пɱ������ظı�
while���ڹ���do...while��whileѭ���ṹ
*/

typedef struct _st
{
	int a;
	char c;
}st;

typedef union _un
{
	int a;
	char c;
}un;

typedef enum _em
{
	RED=10,
	BLUE,
	GREEN,
	BLACK=20,
	WHITE,
	GRAY
}em;

void demo01()
{
	char c = 'a';
	short s = 20;
	signed int a = -1;
	unsigned int ua = -1;
	long l = 100;
	float f = 3.2;
	double d = 4.2;

	em ea = GRAY;

	printf("sizeof(char)=\t%d\n", sizeof(char));
	printf("sizeof(short)=\t%d\n", sizeof(short));
	printf("sizeof(signed int)=\t%d\n", sizeof(signed int));
	printf("sizeof(unsigned int)=\t%d\n", sizeof(unsigned int));
	printf("sizeof(long)=\t%d\n", sizeof(long));
	printf("sizeof(float)=\t%d\n", sizeof(float));
	printf("sizeof(double)=\t%d\n", sizeof(double));
	printf("sizeof(st)=\t%d\n", sizeof(st));
	printf("sizeof(un)=\t%d\n", sizeof(un));
	printf("sizeof(em)=\t%d\n", sizeof(em));

	printf("a=%d, ua=%u\n", a, ua);

	printf("ea=%d\n", ea);
}

int demo02()
{
	un a;
	a.a = 0x01020304;
	printf("a.c = %d\n", a.c);

	if(0x01 == a.c){
		printf("big ending");
	}else if(0x04 == a.c){
		printf("little ending");
	}
	printf("\n");
	return 0;
}

int e;

/*
	volatile���ѱ�����������������ı�����ʱ���п��ܸı䣬
	��˱����ĳ���ÿ����Ҫ�洢���ȡ���������ʱ�򣬶���ֱ�Ӵӱ�����ַ�ж�ȡ���ݡ�
	���û��volatile�ؼ��֣�������������Ż���ȡ�ʹ洢��������ʱʹ�üĴ����е�ֵ

	C�������ṩ�˴洢˵����auto��register��extern��static˵�������ִ洢���
	���ִ洢���˵���������ִ洢�ڣ��Զ��洢�ں;�̬�洢�ڡ�
	����auto��register��Ӧ�Զ��洢�ڡ������Զ��洢�ڵı����ڽ��������ñ����ĳ�����Ǳ�������
	���ڸó����ʱ���ڣ��˳��ó����ʱ������
*/
void demo03()
{
	auto int a = 10;
	register int r = 20;
	volatile int v = 30;
	static s = 40;

	extern int e;
	e = 40;

	a++,r++,v++,s++,e++;
	printf("%x\t%d\n", &a, a);
	//printf("%x\n", &r);	//error C2103: �Ĵ��������ϵġ�&��
	printf("%x\t%d\n", &v, v);
	printf("%x\t%d\n", &e, e);
	printf("%x\t%d\n", &s, s);
}

void main()
{
	demo01();
	demo02();
	demo03();
	demo03();

	system("pause");
}