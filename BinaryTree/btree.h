typedef struct binary_tree {
	struct binary_tree * left_node;
	struct binary_tree * right_node;
	char data;
} *bin_tree, bt_node;

typedef int status;

status CreateBiTree(bin_tree &T);