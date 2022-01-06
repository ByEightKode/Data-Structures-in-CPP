#include<bits/stdc++.h>
using namespace std;
#define MAX_VALUE 10
int a[MAX_VALUE];
int front = -1, rear = -1;

void insert(int val) {
	if (front == -1 and rear == -1) {
		front = 0;
		rear = 0;
	}
	else if (rear == MAX_VALUE - 1) return;
	else
		rear += 1;
	a[front] = val;
}
void Delete() {
	if (front == -1 and rear == -1) return;
	else if (front == rear) {
		front = -1;
		rear = -1;
	}
	else
		front += 1;
}
void print() {
	cout << "Queue:";
	for (int i = front; i <= rear; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int ar[10];
	int i = 0;
	while (cin >> a[i]) {
		insert(a[i]);
		i++;
	}
	Delete(); print();
	Delete(); print();
	Delete(); print();
	return 0;
}