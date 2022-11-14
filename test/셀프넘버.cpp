//#include <iostream>
//#include <vector>
//using namespace std;
//
////생성자가 만든 수를 합성수라고 정의
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
//		int notSelfNum = d(i); //d(i)는 무조건 NotSelfNum
//
//
//		//____________________________________________
//		if (notSelfNum > 10000) 
//			
//			continue;
//			//1부터 10000까지 생성자 이므로 합성수도 
//			//10000개가 나오는데 이 10000개중 10000보다 큰수는 
//			//배열의 크기를 초과하므로 if문을 사용한다.
//		//______________________________________________
//
//
//		selfNumber[notSelfNum] = false; //합성수번째는 false로 한다.
//	}
//
//	for (int i=1; i <= 10000; i++)
//	{
//		if (selfNumber[i]) //selfNumber == true 일때 충족 
//		{
//			cout << i << '\n'; //i는 합성수번째의 수를 의미
//		}
//	}
//	return 0;
//}