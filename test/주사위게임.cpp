//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int dice[3];
//	int answer;
//	int big=0;
//	
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> dice[i];
//	}
//
//
//	if (dice[0] == dice[1] && dice[1] == dice[2])
//	{
//		answer = 10000 + dice[1] * 1000;
//	}
//
//	else if (dice[0] == dice[1] || dice[0] == dice[2])
//	{
//		answer = 1000 + dice[0] * 100;
//	}
//
//	else if (dice[1] == dice[2]) //두번재 주사위와 세번째 주사위의 수가 같은 경우
//	{
//		answer = 1000 + dice[2] * 100;
//	}
//
//	else
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if ( big < dice[i])
//			{
//				big = dice[i];
//			}
//			answer = big * 100;
//		}
//	}
//	
//
//	cout << answer;
//	return 0;
//}