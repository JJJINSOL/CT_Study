#include <string>
#include <vector>

using namespace std;

//프로그래머스_Level1_히샤드 수

bool solution(int x)
{
    bool answer = true;
    int sum = 0;
    int a = x;


    while (a / 10 != 0)
    {
        sum += (a % 10);
        a /= 10;
    }
    
    sum += a;

    if (x%sum == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}