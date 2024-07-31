#include <iostream> 
#include <stack>
using namespace std;
//stack follows the LIFO proceess all operation ofa stack takes O(1) time
// there is swap funtion same as vector
int main() {
	stack<int> stack;
	stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
	stack.push(22);
	stack.push(24);
	stack.push(25);
	int num=0;
	stack.push(num);
	stack.pop();
	stack.pop();
	stack.pop();
    cout<<stack.empty()<<endl;
    cout<<stack.size()<<endl;
	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
