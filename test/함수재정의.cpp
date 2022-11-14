//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	void f() { cout << "Base::f() callde" << endl; }
//
//};
//
//class Derived : public Base {
//public:
//	void f() { cout << "Derived::f()called" << endl; }
//
//};
//
//void main()
//{
//	Derived d, * pDer;
//	pDer = &d;
//	pDer->f();
//
//	Base* pBase;
//	pBase = pDer;
//	pBase->f();
//
//}