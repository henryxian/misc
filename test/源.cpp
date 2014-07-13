#include <stdio.h>

// 链接的时候会报打不开gdi32.lib的错误，每次都要手动在属性中移除才能成功运行。
int main() {
	int a;
	scanf_s("%d", &a);
	printf("hello %d", a);
	getchar();
	return 0;
}