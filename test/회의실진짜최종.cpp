//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool cmd(pair<int, int>x, pair<int, int>y)
//{
//	if (x.second == y.second)
//	{
//		return x.first < y.first;
//	}
//	else
//	{
//		return x.second < y.second;
//	}
//}
//
//
//
//int main()
//{
//	int n;
//	int ans=0;
//	vector<pair<int, int>>list;
//
//	int start, end;
//
//	cin >> n;
//	for (int i = 0;i < n;i++)
//	{
//		cin >> start >> end;
//		list.push_back({ start,end });
//	}
//
//	sort(list.begin(), list.end(), cmd);
//	
//
//	int endtime=0;
//	for (int i = 0;i < n;i++)
//	{
//		if (list[i].first >= endtime)
//		{
//			ans++;
//			endtime = list[i].second;
//		}
//	}
//
//	cout << ans << endl;;
//
//}