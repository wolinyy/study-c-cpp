//�������� ����ͷ�ļ���ΰ���
#ifndef _SCK_CLINT_H_
#define _SCK_CLINT_H_

#ifdef  __cplusplus
extern "C" {
#endif

//��������
// 1���ͻ��˻�����ʼ��
int sckClient_init(void **handle);
// 2���ͻ��˷��ͱ���
int sckClient_send(void *handle, unsigned char *data, int datalen);
// 3���ͻ��˶˽��ܱ���
int sckClient_rev(void *handle, unsigned char **out, int *outlen); 
// 4���ͻ��˻����ͷ� 
int sckClient_destroy(void **handle);

#ifdef  __cplusplus
}
#endif

#endif