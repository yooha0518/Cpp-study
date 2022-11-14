//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool sequence(int n)
//{
//	int ret = n;
//	bool result = true;
//	//int gab, compare_gab;
//
//	vector<int> PositionalNumber(1);
//
//	while (n != 0)
//	{
//		PositionalNumber.push_back(n%10);
//		n = n / 10;
//	}
//	for (auto n : PositionalNumber)
//	{
//		cout << PositionalNumber[n] << endl;;
//	}
//	//gab = PositionalNumber[0] - PositionalNumber[1];
//	/*for (int i=1;i<PositionalNumber.size()-2;i++)
//	{
//		compare_gab = PositionalNumber[i] - PositionalNumber[i + 1];
//
//		if (gab != compare_gab)
//		{
//			result = false;
//			continue;
//		}
//
//	}*/
//	
//
//
//	return result;
//}
//
//int main()
//{
//	int n;
//	int count=0;
//	cin >> n;
//	vector<bool> Num(n,true);
//
//	for (int i = 1; i < n; i++)
//	{
//		Num[i] = sequence(i);
//	}
//	
//
//
//
//	for (auto n : Num)
//	{
//		if (Num[n])
//		{
//			count++;
//		}
//	}
//	
//	cout << count << endl;
//
//	return 0;
//
//
//}