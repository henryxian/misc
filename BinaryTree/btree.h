typedef struct binary_tree {
	struct binary_tree * left_node;
	struct binary_tree * right_node;
	char data;
} *bin_tree, bt_node;

typedef int status;

// Create a binary tree with scanf_s
status CreateBiTree(bin_tree &T);


// Traverse binary tree in recursive way
status TraverseBiTreeRecur(bin_tree T);


// Traverse binary tree in non-recursive way
status TraverseBiTree(bin_tree T);

// Copy a binary tree.
status CopyBiTree(bin_tree T, bin_tree &S);



