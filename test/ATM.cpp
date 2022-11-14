//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////bool  cmd(const int x,const int y)
////{
////	return x < y;
////}
//
//
//int main()
//{
//	int n;
//	int t;
//	int all=0;
//	cin >> n;
//
//	vector <int> time;
//
//	for (int i = 0;i < n;i++)
//	{
//		cin >> t;
//		time.push_back(t);
//	}
//
//	sort(time.rbegin(), time.rend());
//	
//
//	
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j <= i ;j++)
//		{
//			all += time[i];
//			
//		}
//		//cout << "time[" << i << "] :" << time[i] << endl;
//
//	}
//
//
//
//	cout << all << endl;
//
//}