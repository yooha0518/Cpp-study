//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//int func(int n) {
//    if (n == 6) return 1;
//    else if (n == 5) return 2;
//    else if (n == 4) return 3;
//    else if (n == 3) return 4;
//    else if (n == 2) return 5;
//    else return 6;
//}
//
//vector<int> solution(vector<int> lottos, vector<int> win_nums) {
//    vector<int> answer;
//
//    // 0�� ������ ��� ����
//    int zero = 0;
//    for (int i = 0; i < lottos.size(); i++) {
//        if (lottos[i] == 0) zero++;
//    }
//
//    // lottos�� win_nums���� ��ġ�ϴ� ��ȣ ������ ��� ����
//    int check = 0;
//    
//    for (int i = 0; i < lottos.size(); i++) {
//        for (int j = 0; j < win_nums.size(); j++) {
//            if (lottos[i] == win_nums[j]) {
//                
//                check++;
//            }
//        }
//    }
//
//    answer.push_back(func(zero + check));
//    answer.push_back(func(check));
//    return answer;
//}
