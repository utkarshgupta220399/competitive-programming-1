#define MAX _	// <-- Replace the blank (present after MAX) with maximum size of stack needed.

// stack class
template <class T>
class stack {
	T a[MAX];
	int top;
public:
	stack() {
		top = -1;
	}

	void push(T item) {
		if(top == MAX-1)
			throw "Exception: Stack is full. Push operation leads to overflow.\n";
		++top;
		a[top] = item;
	}

	T pop() {
		if(top == -1)
			throw "Exception: Stack is empty. Pop operation leads to underflow.\n";
		T item = a[top];
		--top;
		return item;
	}
	
	int size() {
		return top+1;
	}

	T peek() {
		if(top == -1)
			throw "Exception: Stack is empty. No element to display.\n";
		return a[top];
	}

	bool empty() {
		if(top == -1)
			return true;
		return false;
	}

	bool full() {
		if(top == MAX-1)
			return true;
		return false;
	}
};

/*
	You need to write all your code inside main() within try block and add -
	catch(...) {
		
	}
	below for the program to run perfectly with exception handling.
*/
