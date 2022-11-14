//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool func(int n)
//{
//	int ret = n;
//	vector<int> compare(1);
//	
//	bool result = true;
//	if (n < 100)
//	{
//		return true;
//			
//	}
//
//
//	while (n != 0) //각 자릿수를 배열로 저장
//	{
//		compare.push_back(n % 10);
//		n = n / 10;
//	}
//
//	for (int i = 1;i<compare.size();i++)
//	{
//		//cout << "compare[" << i << "]:" <<compare[i]<< endl;
//	}
//
//	vector<int> gap(1);
//	int gap_int = compare[1] - compare[2];
//	for (int i = 1; i <= compare.size()-2; i++) //각 자릿수의 차이를 배열로 저장
//	{ 
//		//cout << "compare.size() : " << compare.size() << endl;
//		gap.push_back(compare[i] - compare[i + 1]);
//		
//		if (gap_int != (compare[i] - compare[i + 1])) //자릿수의 차이가 다르면 false
//		{
//			//cout << "gap_int:" << gap_int << endl;
//			result = false;
//			//cout << "?" << endl;
//		}
//
//	}
//	
//	/*cout << "gap.size():" << gap.size() << endl;
//	for (int i=1;i<gap.size();i++)
//	{
//		cout <<"gap["<<i<<"] : " << gap[i] << endl;
//	}*/
//	
//
//	
//
//	return result;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int count=0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (func(i))
//		{
//			count++;
//		}
//	}
//
//	cout << count++;
//	
//
//
//
//
//
//
//
//	return 0;
//}