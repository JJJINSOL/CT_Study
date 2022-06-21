//프로그래머스_Level1_약수의 합

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;

    //반복문 범위 1(0나누면 안됨) ~ n(자기 자신의 숫자까지 나누기)
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
        }
    }

    return answer;
}