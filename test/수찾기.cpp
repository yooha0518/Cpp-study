//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//// ÀÌÁøÅ½»ö 
//
//int main()
//{
//    int n, m, cheak,num;
//
//    scanf_s("%d", &n);
//
//    
//   
//    vector<int>A(0);
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf_s("%d", &num);
//        A.push_back(num);
//    }
//
//    scanf_s("%d", &m);
//    vector<int>M(m);
//
//
//
//
//    for (int i = 0; i < m; i++)
//    {
//        scanf_s("%d", &M[i]);
//        cheak = 0;
//        for (int j = 0; j < n; j++)
//        {
//            if (A[j] == M[i])
//            {
//                cheak = 1;
//            }
//
//        }
//        printf("%d \n", cheak);
//
//
//    }
//
//    return 0;
//}