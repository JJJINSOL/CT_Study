//프로그래머스_Level1_문자열을 정수로 바꾸기

#include <string>
#include <vector>

using namespace std;

int solution(string s) 
{
    int answer = 0;
    int i;
    //answer = stoi(s);

    if (s[0] == '-' || s[0] == '+')
    {
        i = 1;
    }
    else
    {
        i = 0;
    }

    for (i; i < s.size(); i++)
    {
        answer = answer * 10 + (s[i] - '0');
    }
    if (s[0] == '-')
    {
        answer = -answer;
    }

    return answer;
}