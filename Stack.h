#pragma once
#include <cstddef>
template <class T> 
class Stack
{
	private:
		class StackNode
		{
		public:
			T data;
			StackNode* next;
			StackNode* newNode(T data) {
				StackNode* stackNode = new StackNode();
				stackNode->data = data;
				stackNode->next = NULL;
				return stackNode;
			};
		};
		int sizeStack;  //size of stack
		int occupied;  //number of elements in stack
		StackNode* root;  //the stack itself that elements will be stored in
		//methods
		int isEmpty();  //checks if stack is empty
		
	public:
		Stack(); //normal constructor to initialize members
		Stack(T data, int size); //constructor to create a stack with certain size and add an initial element
		~Stack();  //destructor to delete stack from memory after closing program
		//methods
		void push(T data);  //pushes element into stack
		void pop(); //deletes, then prints first element in stack
		T& top(); //prints the first element in stack
		int size();  //prints number of elements in stack


};

