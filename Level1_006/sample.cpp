//프로그래머스_Level1_콜라츠 추측

#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    int answer = 0;

    //int인 num을 long long 으로 바꾸어 주지 않으면 (1 ~ 8,000,000) 범위가 넘어가서 제대로 결과가 안나옴
    long long a = num;
    while (answer < 500)
    {
        if (a == 1)
        {
            break;
        }
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            a = a * 3 + 1;
        }
            answer++;
        }

    if (answer == 500)
    {
        answer = -1;
    }

    return answer;
}