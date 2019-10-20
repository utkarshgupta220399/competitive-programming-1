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
		if(top == MAX-1) {
			cout << "Exception: Stack is full. Push operation leads to overflow.\n";
			return;
		}
		++top;
		a[top] = item;
	}

	T pop() {
		if(top == -1) {
			cout << "Exception: Stack is empty. Pop operation leads to underflow.\n";
			return T();
		}
		T item = a[top];
		--top;
		return item;
	}
	
	int size() {
		return top+1;
	}

	T peek() {
		if(top == -1)
			return T();
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