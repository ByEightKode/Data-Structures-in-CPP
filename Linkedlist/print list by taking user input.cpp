#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};

struct node* head;

void insert(int num) {
	node* new_node = new node();
	new_node -> data = num;
	new_node -> next = NULL;
	if (head != NULL) {
		node* ptr = head;
		while (ptr -> next != NULL)
			ptr = ptr -> next;
		ptr -> next = new_node;
	}
	else
		head = new_node;
}

void print() {
	node* ptr = head;
	while (ptr != NULL) {
		cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
	cout << endl;
}

int main()
{
	head = NULL;
	int n;
	cin >> n;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		insert(num);
	}
	print();
	return 0;
}