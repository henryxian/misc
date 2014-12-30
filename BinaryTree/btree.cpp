#include <stdio.h>
#include <stdlib.h>
#include "btree.h"
#include <iostream>

using namespace std;

int main() {
	binary_tree* T2 = (binary_tree *)malloc(sizeof(binary_tree));
	binary_tree* T3 = (binary_tree *)malloc(sizeof(binary_tree));
	bin_tree T = (binary_tree *)malloc(sizeof(binary_tree));
	T->left_node = T2;
	cout << T->left_node << " " << T2 << " " << T3 << endl;
	T2 = T3;
	cout << T->left_node << " " << T2 << " "<< T3 << endl;
	//printf("hello world!");
	//bin_tree T = NULL;
	//CreateBiTree(T);
	getchar();
	return 0;

}

// 先序序列生成二叉树。
status CreateBiTree(bin_tree &T) {
	char ch;
	printf("Please input a sequence:");
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