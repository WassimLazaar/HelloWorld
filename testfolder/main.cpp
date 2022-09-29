/*
 * main.cpp
 *
 *  Created on: 26 Jan 2022
 *      Author: Rachid
 */


#include <iostream>
#include <stack>
using namespace std;



void printStackElements(stack<int> stack){
	while (!stack.empty() ){
		cout << stack.top() << endl;
		stack.pop();
	}
}

int main(){

	stack<int>numbersStack;
numbersStack.push(1);
numbersStack.push(3);
numbersStack.push(2);
numbersStack.pop();

/*if (numbersStack.empty() )
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;
		cout << "Stacksize is" << numbersStack.size() << endl;

*/

printStackElements(numbersStack);
return 0;
}













