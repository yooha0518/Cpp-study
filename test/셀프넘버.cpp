//#include <iostream>
//#include <vector>
//using namespace std;
//
////�����ڰ� ���� ���� �ռ������ ����
//int d(int n) {
//	int ret = n;
//	
//	
//	while (n != 0) {
//		ret = ret + n % 10;
//		n = n / 10;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int n = 10000;
//	vector<bool> selfNumber(10000 + 1, true);
//	for (int i = 1; i <= 10000; i++)
//	{
//		int notSelfNum = d(i); //d(i)�� ������ NotSelfNum
//
//
//		//____________________________________________
//		if (notSelfNum > 10000) 
//			
//			continue;
//			//1���� 10000���� ������ �̹Ƿ� �ռ����� 
//			//10000���� �����µ� �� 10000���� 10000���� ū���� 
//			//�迭�� ũ�⸦ �ʰ��ϹǷ� if���� ����Ѵ�.
//		//______________________________________________
//
//
//		selfNumber[notSelfNum] = false; //�ռ�����°�� false�� �Ѵ�.
//	}
//
//	for (int i=1; i <= 10000; i++)
//	{
//		if (selfNumber[i]) //selfNumber == true �϶� ���� 
//		{
//			cout << i << '\n'; //i�� �ռ�����°�� ���� �ǹ�
//		}
//	}
//	return 0;
//}