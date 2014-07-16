#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

int main() {
	//printf("hello world!");
	bin_tree T = NULL;
	CreateBiTree(T);
	return 0;
}

// 先序序列生成二叉树。
status CreateBiTree(bin_tree &T) {
	char ch;
	scanf_s("%c", &ch); // scanf_s()的行为有点奇怪，需要继续理解。
	if (ch == '^') {
		T = NULL;
	}
	else {
		if (((T = (bt_node *)malloc(sizeof(bt_node))) == NULL)) {
			exit(1);
		}
		T->data = ch;
		CreateBiTree(T->left_node);
		CreateBiTree(T->right_node);
	}
	return 1;
}