//프로그래머스_Level1_자연수 뒤집어 배열로 만들기

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) 
{
    vector<int> answer;
    int num;

    while (1)
    {
        num = n % 10;

        answer.push_back(num);

        if (n < 10)
        {
            break;
        }

        n = n / 10;
    }

    return answer;
}