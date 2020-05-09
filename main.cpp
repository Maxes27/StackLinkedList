#include <iostream> 
#include "Stack.h"
#include "Stack.cpp"
using namespace std;
int main()
{
	/*Stack<int> stk(1, 3);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.pop();
	stk.push(4);
	cout<<stk.top();*/
	Stack<string> stk1("Someone", 3);
	stk1.push("Max");

	

	return 0;
}


