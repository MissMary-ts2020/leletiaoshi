#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void my_strcpy(char* dest,const char* source) {//const�޷����ı�
	assert(dest != NULL);
	assert(source != NULL);//����,Σ��ʱ���ԶϿ�
	while (*dest++ = *source++);//Ҫѧ�������񾭲�д��
		//������Ϊ'\0'Ҳ����ASCII0��ʱ�����þ͡���������
		// 
		//��ʱָ���Ѿ�ָ����source��\0����dest��λ��ָ����destӦ��Ϊ\0��λ��

	return;
	

}

int main() {

	//strcpy
	//�ַ�������
	const int num = 19;//num���������
	const int* p = &num;//const����ָ�������*��ߣ����ε���*p,���ø�ָ��Ϊֻ��ָ��
	int** pp = &p;
	**pp = 20;//����ͨ�����߼����ָ��ǿ�Ƹ���
	printf("%d", *p);


	return NULL;
}