#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char* dest, char* source) {
	while (*source != '\0') {
		*dest = *source;
		dest++, source++;

	}
	//��ʱָ���Ѿ�ָ����source��\0����dest��λ��ָ����destӦ��Ϊ\0��λ��
	*dest = '\0';//�������Ҫ��һ��

}

int main() {

	//strcpy
	//�ַ�������
	char str1[] = "accesssss";
	char str2[] = "cc";
	my_strcpy(str1, str2);
	printf("%s\n%s\n", str1, str2);


	return NULL;
}