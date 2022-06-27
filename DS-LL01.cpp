#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void insert(Node* prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		cout<<"The given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node();

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

void append(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	Node *last = *head_ref;

	new_node->data = new_data;

	new_node->next = NULL;

	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return;
}

void print(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	
	append(&head, 9);
	
	push(&head, 3);

	push(&head, 2);
	
	append(&head, 5);
	
	insert(head->next, 7);
	
	cout<<"Linked list is: ";
	print(head);
	
	return 0;
}

