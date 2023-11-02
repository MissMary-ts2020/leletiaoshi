#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void my_strcpy(char* dest,const char* source) {//const无法被改变
	assert(dest != NULL);
	assert(source != NULL);//断言,危险时可以断开
	while (*dest++ = *source++);//要学会这种神经病写法
		//当正好为'\0'也就是ASCII0的时候，正好就。。。。。
		// 
		//此时指针已经指向了source的\0，而dest的位置指向了dest应当为\0的位置

	return;
	

}

int main() {

	//strcpy
	//字符串拷贝
	const int num = 19;//num不允许更改
	const int* p = &num;//const放在指针变量的*左边，修饰的是*p,设置该指针为只读指针
	int** pp = &p;
	**pp = 20;//可以通过更高级别的指针强制更改
	printf("%d", *p);


	return NULL;
}