//#include <iostream>
//using namespace std;
//
//class Power {
//	int kick;
//	int punch;
//
//public:
//	Power(int kick = 0, int punch = 0)
//	{
//		this->kick = kick; this->punch = punch;
//	}
//
//	void show();
//
//	//Power operator + (Power op2);
//	//+++++++++++++++++++++++++++++++++
//	
//	bool operator == (Power op2);
//	//=================================
//
//	Power& operator +=(Power op2);
//	//+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
//
//	//Power& operator ++();
//	//B++B++B++B++B++B++B++B++B++B++B++
//
//	//Power operator ++(int i);
//	//A++A++A++A++A++A++A++A++A++A++A++
//
//	bool operator !();
//	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//
//	friend Power operator + (int a, Power op2);
//	//int+int+int+int+int+int+int+int+
//
//	friend Power& operator ++(Power& op);
//	friend Power operator ++(Power& op, int i);
//
//
//	Power& operator << (int n); 
//	//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//	
//};
//
//void Power::show()
//{
//	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
//}
//
////Power Power::operator+ (Power op2) { 
////	Power tmp;
////	tmp.kick = this->kick + op2.kick;
////	tmp.punch = this->punch + op2.punch;
////	return tmp;
////}
////++++++++++++++++++++++
//
//bool Power::operator == (Power op2) {
//	if (kick == op2.kick && punch == op2.punch) return true;
//	else return false;
//} 
////======================
//
//Power& Power::operator+=(Power op2)
//{
//	kick = kick + op2.kick;
//	punch = punch + op2.punch;
//	return *this;
//}
////+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
//
////Power& Power::operator ++()
////{
////	kick++;
////	punch++;
////	return *this;
////}
////B++B++B++B++B++B++B++B++B++B++B++B
//
////Power Power::operator ++(int i)
////{
////	Power tmp = *this;
////	kick++;
////	punch++;
////	return tmp;
////}
//////A++A++A++A++A++A++A++A++A++A++A++
//
//bool Power::operator ! () 
//{
//	if (kick == 0 && punch == 0) return true;
//	else return false;
//}
////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//
//Power operator +(int i, Power op2)
//{
//	Power tmp;
//	tmp.kick = i + op2.kick;
//	tmp.punch = i + op2.punch;
//	return tmp;
//}
////int+int+int+int+int+int+int+int+int+
//
//Power& operator++(Power& op)
//{
//	op.kick++;
//	op.punch++;
//	return op;
//}
////out++B++out++B++out++B++out++B++out++B++
//
//Power operator ++(Power& op, int i)
//{
//	Power tmp = op;
//	op.kick++;
//	op.punch++;
//	return tmp;
//}
////out++A++out++A++out++A++out++A++out++A++
//
//Power& Power::operator << (int n) 
//{
//	kick += n;
//	punch += n;
//	return *this;
//}
////<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//
//
//
//int main()
//{
//	/*Power a(3, 5), b(4, 6), c;
//	c = a + b;  
//	a.show();
//	b.show();
//	c.show();*/
//	// +++++++++++++++++++
//
//	/*Power a(4, 5), b(3, 5);
//	a.show();
//	b.show();
//	if (a == b)cout << "두 파워가 같다." << endl;
//	else cout << "두 파워가 같지 않다." << endl; */
//	//===================
//
//	/*Power a(3, 5), b(4, 6);
//	a.show();
//	b.show();
//	a += b;
//	a.show();*/
//	//+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
//
//	/*Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = ++a;
//	a.show();
//	b.show();*/
//	//B++B++B++B++B++B++B++B++B++B++B++B
//	
//	//Power a(3, 5), b;
//	//a.show();
//	//b.show();
//	//b = a++;
//	//a.show();
//	//b.show();
//	//A++A++A++A++A++A++A++A++A++A++A++
//	
//
//	/*Power a(0, 0), b(5, 5);
//	if (!a) cout << "a의 파워가 0이다." << endl;
//	else cout << "a의 파워가 0이 아니다." << endl;
//	if (!b) cout << "a의 파워가 0이다." << endl;
//	else cout << "b의 파워가 0이 아니다." << endl;*/
//	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//
//	/*Power a(3, 5), b;
//	a.show();
//	b.show();
//	b = 2 + a;
//	a.show();
//	b.show();*/
//	//int+int+int+int+int+int+int+int+int+int+int+
//
//
//
//
//	/*Power a(3, 5), b;
//	b = ++a;
//	a.show();
//	b.show();*/
//	//out++B++out++B++out++B++out++B++out++B++
//
//	Power a(3, 5), b;
//	b = a++;
//	a.show();
//	b.show();
//	//out++A++out++A++out++A++out++A++out++A++
//
//
//	/*Power a(1, 2); 
//	a << 3 << 5 << 6;  
//	a.show();*/
//	//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//	
//
//	return 0;
//}