//프로그래머스_Level1_정수 제곱근 판별

#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) 
{
    long long answer = 0;

    answer = sqrt(n);

    if (pow(answer,2) == n)
    {
        answer = pow((answer + 1),2);
    }
    else
    {
        answer = -1;
    }

    return answer;
}