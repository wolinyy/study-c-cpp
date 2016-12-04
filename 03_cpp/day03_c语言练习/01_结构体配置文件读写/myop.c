#include "stdlib.h"
#include "stdio.h"
#include "string.h"
//include "cfg_op.h"

#include "myop.h"
//�����ʦ
int AddTeacher(char *pfileName, Teacher *pTe)
{
	int		ret = 0;
	//׼��д�����ļ��Ĺؼ��� ����ID��̬����
	char		Teacher_InfoID[128];
	char 	Teacher_Name[128];
	char 	Teacher_Age[128];
	char 	Teacher_StudentInfo[1024];
	char		infoId[128];
	char		infoAge[128];

	sprintf(Teacher_InfoID, "%s%d", "Teacher_InfoID_",pTe->infoId);
	sprintf(Teacher_Name, "%s%d", "Teacher_Name_",pTe->infoId);
	sprintf(Teacher_Age, "%s%d", "Teacher_Age_",pTe->infoId);
	sprintf(Teacher_StudentInfo, "%s%d", "Teacher_StudentInfo_",pTe->infoId);

	sprintf(infoId, "%d", pTe->infoId);
	sprintf(infoAge, "%d", pTe->age);

	ret =SetCfgItem(pfileName, Teacher_InfoID, infoId , strlen(infoId));
	if (ret != 0)
	{
		printf("func WriteCfgItem() err: %d \n", ret);
		return ret;
	}

	ret =SetCfgItem(pfileName, Teacher_Name, pTe->name , strlen(pTe->name));
	if (ret != 0)
	{
		printf("func WriteCfgItem() err: %d \n", ret);
		return ret;
	}
	ret =SetCfgItem(pfileName, Teacher_Age, infoAge , strlen(infoAge));
	if (ret != 0)
	{
		printf("func WriteCfgItem() err: %d \n", ret);
		return ret;
	}
	ret =SetCfgItem(pfileName, Teacher_StudentInfo, pTe->studentInfo , strlen(Teacher_StudentInfo));
	if (ret != 0)
	{
		printf("func WriteCfgItem() err: %d \n", ret);
		return ret;
	}
	return ret;
}

//��ʾ��ʦ
int ModifyTeacher(char *pfileName, Teacher *pTe)
{

	int		ret = 0;
	//׼��д�����ļ��Ĺؼ��� ����ID��̬����
	char		Teacher_InfoID[128] ;
	char 	Teacher_Name[128];
	char 	Teacher_Age[128];
	char 	Teacher_StudentInfo[1024];
	char		infoId[128] = {0};
	char		infoAge[128] = {0};
	int		tmpLen = 0;

	sprintf(Teacher_InfoID, "%s%d", "Teacher_InfoID_",pTe->infoId);
	sprintf(Teacher_Name, "%s%d", "Teacher_Name_",pTe->infoId);
	sprintf(Teacher_Age, "%s%d", "Teacher_Age_",pTe->infoId);
	sprintf(Teacher_StudentInfo, "%s%d", "Teacher_StudentInfo_",pTe->infoId);

	sprintf(infoId, "%d", pTe->infoId);
	sprintf(infoAge, "%d", pTe->age);
	
	
	ret = GetCfgItem(pfileName, Teacher_InfoID ,infoId, &tmpLen);
	if (ret != 0)
	{
		printf("func GetCfgItem() err: %d \n", ret);
		return ret;
	}

	ret = GetCfgItem(pfileName, Teacher_Name ,pTe->name, &tmpLen);
	if (ret != 0)
	{
		printf("func GetCfgItem() err: %d \n", ret);
		return ret;
	}
	ret = GetCfgItem(pfileName, Teacher_Age ,infoAge, &tmpLen);
	if (ret != 0)
	{
		printf("func GetCfgItem() err: %d \n", ret);
		return ret;
	}
	pTe->age = atoi(infoAge);

	ret = GetCfgItem(pfileName, Teacher_StudentInfo ,pTe->studentInfo, &tmpLen);
	if (ret != 0)
	{
		printf("func GetCfgItem() err: %d \n", ret);
		return ret;
	}

	return 0;
}
void mainxxx()
{
	system("pause");
}