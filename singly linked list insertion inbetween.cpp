#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

void insertInbetween(Node* n, int data){
	
}

void createNewNode(Node** head, int data){
	Node* temp = head;
	Node* node = new Node();
	node->data = data;
	node->next = NULL;
	
	while(temp->next!=NULL){		
		temp = temp->next;
	}
	temp->next = node;//Adding the node to the last index
	return;
}

void print(Node* head){
	while(head!=NULL){
		cout << head->data << endl;
	}
}

int main(){
	int newData = 10;
	Node* head = NULL;
	for(int i = 1; i <= 10; i++){
		createNewNode(&head, i);
	}
	//insertInbetween();
	print(head);
}