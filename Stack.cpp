#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100
int A[MAX_SIZE];
int top = -1;

void push(int n) {
	if (top == MAX_SIZE - 1) {
		cout << "Stack Overflow";
		return;
	}
	A[++top] = n;
}

void pop() {
	if (top == -1) {
		cout << "Stack is Empty" << endl;;
		return;
	}
	top--;
}
int Top() {
	return A[top];
}
int isEmpty() {
	if (top == -1) return 1;
	return 0;
}
void print() {
	cout << "Stack:" << " ";
	for (int i = 0; i <= top; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}
int main()
{
	push(12); print();
	push(10); print();
	push(23); print();
	cout << Top() << endl;
	cout << isEmpty() << endl;
	pop(); print();
	pop(); print();
	pop(); print();
	pop(); print();
	cout << isEmpty() << endl;
	return 0;
}