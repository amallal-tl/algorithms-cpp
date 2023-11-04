#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// inserts a new node on the front of
// the list.
void push(Node** head_ref, int new_data)
{

	// 1. allocate node
	Node* new_node = new Node();

	// 2. put in the data
	new_node->data = new_data;

	// 3. Make next of new node as head
	new_node->next = (*head_ref);

	// 4. Move the head to point to
	// the new node
	(*head_ref) = new_node;
}

void print(Node* n){
	while(n != NULL){
		cout << n->data << endl;
		n = n->next;
	}
}

int main(){
	Node* n = NULL; // initialize n to NULL
	push(&n, 10); // pass the address of n
	print(n); // print the data of the node
	return 0; // return 0 from main
}
