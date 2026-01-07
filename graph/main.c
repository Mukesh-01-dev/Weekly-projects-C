#include<stdio.h>

struct Node
{
	int value;
	struct Node *left;
	struct Node *right;
};

void inorder(struct Node* node) {
	if (node) 
	{
		inorder(node->left);
		printf("%d ", node->value);
		inorder(node->right);
	}
}

void preorder(struct Node* node) {
	if (node) 
	{
		printf("%d ", node->value);
		preorder(node->left);
		preorder(node->right);
	}
}

void postorder(struct Node* node) {
	if (node) 
	{
		postorder(node->left);
		postorder(node->right);
		printf("%d ", node->value);
	}
}

int main() {
	struct Node n6 = {6, NULL, NULL};
	struct Node n7 = {7, NULL, NULL};
	struct Node n5 = {5, NULL, NULL};
	struct Node n4 = {4, NULL, NULL};
	struct Node n2 = {2, &n4, &n5};
	struct Node n3 = {3, &n6, &n7};
	struct Node n1 = {1, &n2, &n3};

	printf("PreOrder Traversal: ");
	preorder(&n1);
	printf("\n");

	printf("InOrder Traversal: ");
	inorder(&n1);
	printf("\n");

	printf("PostOrder Traversal: ");
	postorder(&n1);
	printf("\n");

	return 0;
}