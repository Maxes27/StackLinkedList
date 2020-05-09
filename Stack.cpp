#include "Stack.h"
#include <iostream>

using namespace std;
template <class T>
Stack<T>::Stack():occupied(0), sizeStack(0), root(NULL){
	
}
template <class T>
Stack<T>::Stack(T data, int size) {
	this->sizeStack = size;
	occupied = 1;
	StackNode obj;
	root = obj.newNode(data);
	cout << data << " Pushed to stack" << endl;

}
template <class T>
Stack<T>::~Stack() {
	StackNode* current = root; //holding root address in here  temporary
	StackNode* next;  //created to keep assigning the next each time to it and delete the one before it

	while (current != NULL)  //keeps looping on stack and deletes each element until reach the end of it
	{
		next = current->next;
		free(current);
		current = next;
	}

	root = NULL;
}
template <class T>
int Stack<T>::isEmpty()
{
	return !root;  //if root has an element its negation will be zero which says the stack is empty
}
template <class T>
void Stack<T>::push(T data)
{
	if (occupied == sizeStack) {   //check if stack is full
		cout << "Stack is full.";
	}
	else {  //adds element
		StackNode obj;
		StackNode* stackNode = obj.newNode(data);
		stackNode->next = root;
		root = stackNode;
		cout << data << " pushed to stack\n";
		occupied++;
	}
	
}
template <class T>
void Stack<T>::pop()
{
	if (isEmpty())
		cout << "Stack is empty" << endl;  //checks if stack is empty 
	else {  //deletes the first element and print it
		StackNode* temp = root;
		root = (root)->next;
		int popped = temp->data;
		free(temp);
		occupied--;
		cout << popped << " is popped" << endl;
	}
}
template <class T>
T& Stack<T>::top()
{
	return root->data;
}
template <class T>
int Stack<T>::size() {
	return occupied;
}
