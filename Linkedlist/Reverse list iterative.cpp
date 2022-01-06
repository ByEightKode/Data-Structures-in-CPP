#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* reverse(struct node* head) {
	node *prev, *curr, *next;
	prev = NULL;
	curr = head;
	while (curr != NULL) {
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;
}

node* insert(node* head, int num) {
	node* new_node = new node();
	new_node -> data = num;
	new_node -> next = NULL;
	if (head == NULL) head = new_node;

	else {
		node* ptr = head;
		while (ptr -> next != NULL) ptr = ptr -> next;
		ptr -> next = new_node;
	}
	return head;
}

void print(node* head) {
	while (head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}

int main()
{
	node* head = NULL;
	head = insert(head, 5);
	head = insert(head, 8);
	head = insert(head, 3);
	head = insert(head, 1);
	print(head);
	head = reverse(head);
	print(head);
	return 0;
}