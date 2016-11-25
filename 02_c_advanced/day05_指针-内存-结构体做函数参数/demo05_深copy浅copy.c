#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//�ṹ��Ķ���
typedef struct _AdvTeacher
{
	char *name;
	char buf[100];
	int age;
}Teacher ;


Teacher * creatT()
{
	Teacher *tmp = NULL;
	tmp = (Teacher *)malloc(sizeof(Teacher));
	tmp->name = (char *)malloc(100);
	return tmp;
}

void FreeT(Teacher *t)
{
	if (t == NULL)
	{
		return ;
	}
	if (t->name != NULL)
	{
		free(t->name);
	}
}

//������ԭ��
//�������������ṩ��copy��Ϊ��һ��ǳcopy
//���ṹ���Ա���к���buf��ʱ��û������
//���ṹ���Ա���л���ָ��ĺ�����������ֻ�����ָ�������copy��ָ��������µ��ڴ�ռ䣬�����������ڶ�ַ����ڴ�
//����Ǳ�������ǳcopy������Ҫ��˳�ӡ�������
//

//�������
int copyObj(Teacher *to, Teacher *from)
{
	//*to = *from;//copy��
	memcpy(to, from, sizeof(Teacher));
	to->name = (char *)malloc(100);
	strcpy(to->name, from->name);
}
void main()
{
	Teacher t1;
	Teacher t2;
	t1.name = (char *)malloc(100);
	t1.age = 10;

	//t2 = t1;//copy��
	copyObj(&t2, &t1);

	printf("t2.age=%d\n", t2.age);

	if (t1.name != NULL)
	{
		free(t1.name );
	}

	if (t2.name != NULL)
	{
		free(t2.name );
	}

	system("pause");
}
	


