//���α׷��ӽ�_Level1_���� ������ �Ǻ�

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