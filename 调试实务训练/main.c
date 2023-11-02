#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 0;
	int arr[10] = { 0 };
	for (; i < 10; i++) {
		arr[i] = i + 1;
	}

	for (i = 0; i <= 12; i++) {
		printf("always");
		arr[i] = 0;
	}

	system("pause");
	//研究该程序死循环的原因



	return NULL;
}