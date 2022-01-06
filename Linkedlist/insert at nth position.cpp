#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

struct node* head;

void insert(int num, int n) {
	node* new_node = new node();
	new_node -> data = num;
	new_node -> next = NULL;
	if (n == 1) {
		new_node -> next = head;
		head = new_node;
		return;
	}
	node* ptr = head;
	for (int i = 1; i < n - 1; i++)
		ptr = ptr -> next;
	new_node -> next = ptr -> next;
	ptr -> next = new_node;
}

void print() {
	node* ptr = head;
	while (ptr != NULL) {
		cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
}

int main()
{
	head = NULL;
	insert(2, 1);
	insert(3, 2);
	insert(5, 3);
	insert(3, 1);
	print();
	return 0;
}