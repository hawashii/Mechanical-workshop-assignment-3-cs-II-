#include <iostream>
using namespace std;
template <class T>
class queuec
{
	int maxsize=10
	T data[maxsize];
	int rear;
	int front;

public:
	queuec() {
		rear = -1;
		front = 0;
	}
	void push(T elemnt) {
		data[++rear] = elemnt;

	}
	T pop() {
		return data[front++];

	}

};

