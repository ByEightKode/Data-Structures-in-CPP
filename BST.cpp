#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};

struct node* newNode(int val) {

	node* new_node = new node();
	new_node->data = val;
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}
node* insert(node* root, int val) {
	if (root == NULL) {
		root = newNode(val);
	}
	else if (val <= root->data) {
		root->left = insert(root -> left, val);
	}
	else
		root -> right = insert(root -> right, val);

	return root;
}
bool search(node* root, int val) {
	if (root == NULL)
		return 0;
	if ( root->data == val)
		return 1;
	else if (val < root -> data)
		return search(root->left, val);
	else
		return search(root -> right, val);
}

void levelOrder(node* root) {
	if (root == NULL) return;

	queue<node*> Q;
	Q.push(root);

	while (!Q.empty()) {
		node* current = Q.front();
		cout << current -> data << " ";
		if (current -> left != NULL ) Q.push(current -> left);
		if (current -> right != NULL) Q.push(current -> right);
		Q.pop();
	}
}

void preOrder(node* root) {
	if ( root == NULL) return;

	cout << root -> data << " ";
	preOrder(root -> left);
	preOrder(root -> right);
}

void inOrder(node* root) {
	if (root == NULL) return;

	inOrder(root -> left);
	cout << root -> data << " ";
	inOrder(root -> right);
}

void postOrder(node* root) {
	if (root == NULL) return;

	inOrder(root -> left);
	inOrder(root -> right);
	cout << root -> data << " ";
}

int main()
{
	node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 8);
	root = insert(root, 12);
	root = insert(root, 17);
	root = insert(root, 25);
	levelOrder(root);
	cout << endl;
	preOrder(root);
	cout << endl;
	inOrder(root);
	cout << endl;
	postOrder(root);
	return 0;
}