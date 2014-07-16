#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

int main() {
	//printf("hello world!");
	bin_tree T = NULL;
	CreateBiTree(T);
	return 0;
}

// �����������ɶ�������
status CreateBiTree(bin_tree &T) {
	char ch;
	scanf_s("%c", &ch); // scanf_s()����Ϊ�е���֣���Ҫ������⡣
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