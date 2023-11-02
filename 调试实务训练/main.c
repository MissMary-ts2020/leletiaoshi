#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char* dest, char* source) {
	while (*source != '\0') {
		*dest = *source;
		dest++, source++;

	}
	//此时指针已经指向了source的\0，而dest的位置指向了dest应当为\0的位置
	*dest = '\0';//因此这里要补一个

}

int main() {

	//strcpy
	//字符串拷贝
	char str1[] = "accesssss";
	char str2[] = "cc";
	my_strcpy(str1, str2);
	printf("%s\n%s\n", str1, str2);


	return NULL;
}