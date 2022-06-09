#ifndef _Tstack_
#define _Tstack_
#define SIZE 100

template<class T>
class Tstack {
	T s[SIZE];
	int top;
public:
	void push(T x);
	void pop(T& x);
	int stackempty();
	stack();
	~stack() { delete[]s; }
};

template<class T>
stack<T>::stack() {
	top = -1;
}

template<class T>
void stack<T>::push(Tx) {
	if (top < SIZE) {
		top++;
		s[top] = x;
	}
}

template<class T>
void stack<T>::pop(T& x) {
	if (stackempty() == 0) {
		x = s[top];
		top--;
	}
}

template<class T>
int stack<T>::stackempty() {
	if (top == -1)return 1;
	else return 0;
}

#endif
