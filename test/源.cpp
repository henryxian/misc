#include <stdio.h>
#include <stdlib.h>

// 链接的时候会报打不开gdi32.lib的错误，每次都要手动在属性中移除才能成功运行。
int main(int argc, char* argv[]) {
	//int a;
	//scanf_s("%d", &a);
	//printf("hello %d", a);
	//getchar();
	//return 0;
	int n = argc > 1 ? atoi(argv[1]) : 4;
	for (int j = 1; j <= n; j++) {
		int s = 1 << j, k = (1 << n) - s, x;
		for (int y = s - j; y >= 0; y--, putchar('\n')) {
			for (x = 0; x < y + k; x++) printf("  ");
			for (x = 0; x + y < s; x++) printf("%c ", '!' ^ y & x);
			for (x = 1; x + y < s; x++) printf("%c ", '!' ^ y & (s - y - x - 1));
		}
	}
	getchar();
}
