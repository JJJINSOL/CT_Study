//프로그래머스_Level1_자릿수 더하기

#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while (1)
    {
        answer += n % 10;
        if (n < 10)
        {
            break;
        }
        n = n / 10;
    }

    return answer;
}