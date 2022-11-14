//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	int five, three;
//	int fiveafter,threeafter;
//	
//
//	cin >> n;
//
//	//5로 나눈 후에 3으로 나눠지는 경우
//	
//	
//
//	five = n / 5;
//	fiveafter = n % 5;
//
//	
//	if (n % 5 != 0 && n%3==0)
//	{
//		fiveafter = n;
//		five = 0;
//	}
//
//	three = fiveafter / 3;
//	threeafter = fiveafter % 3;
//	
//	if (fiveafter % 3 == 0) { 
//		cout << five << three << endl;;
//
//		cout << five + three << endl; }
//
//	int a;
//	a = n;
//	int i;
//	if (threeafter != 0)
//	{
//	
//		for (i = 1;i <= n / 5;i++)
//		{
//			n = n - 5;
//			if (n % 3 == 0)
//			{
//				five = i+1;
//				three = n / 3;
//				break;
//			}
//		}
//		
//		if (i == a + 1)
//		{
//			cout << "-1" << endl;
//		}
//		
//	}
//	
//	return 0;
//		
//}
//
//	
//	
//	
//
//
//
//
