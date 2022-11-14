//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int d(int n) {
//	int answer = n;
//
//
//	while (n != 0)
//	{
//		answer = answer + n % 10;
//		n = n / 10;
//	}
//
//	return answer;
//
//}
//
//
//int main()
//{
//	vector<bool> SelfNum (10000 + 1, true);
//
//	int NotSelfNum;
//	for (int i = 1; i <= 10000; i++)
//	{
//		NotSelfNum = d(i);
//
//		if (d(i) <= 10000)
//		{
//			SelfNum[NotSelfNum] = false;
//		}
//
//	}
//
//	for (int i = 1; i <= 10000; i++)
//	{
//		if (SelfNum[i])
//		{
//			cout<<i<<endl;
//		}
//	}
//
//
//	return 0;
//}