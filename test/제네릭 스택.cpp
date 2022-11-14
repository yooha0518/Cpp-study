//#include <iostream>
//using namespace std;
//
//template <class T>
//class MyStack
//{
//	int tos;
//	T data[100];
//
//public:
//	MyStack();
//	void push(T element);
//	T pop();
//
//};
//
//template <class T>
//MyStack<T>::MyStack()
//{
//	tos = -1;
//}
//
//template <class T>
//void MyStack<T>::push(T element)
//{
//	if (tos == 99) { cout << "Stack full"; return; }
//	tos++;
//	data[tos] = element;
//}
//
//template <class T>
//T MyStack<T>::pop()
//{
//	if (tos == -1) { cout << "empty Stack";return 0; }
//	T retData;
//	retData = data[tos--];
//	return retData;
//}
//
//int main()
//{
//	MyStack<int> iStack;
//	iStack.push(4);
//	cout << iStack.pop() << endl;
//
//	MyStack<double> dStack;
//	dStack.push(3.5);
//	cout << dStack.pop() << endl;
//
//	MyStack<char>* p = new MyStack<char>();
//	p->push('e');
//	cout << p->pop() << endl;
//
//	delete p;
//
//}
