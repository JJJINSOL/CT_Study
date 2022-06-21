//프로그래머스_Level1_이상한 문자 만들기

#include <string>
#include <vector>

using namespace std;

string solution(string s) 
{
    string answer = "";
    int a = 0;


    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            a = 0;
            answer += ' ';
            continue;
        }
        if (a % 2 == 1)
        {
            answer+= tolower(s[i]);
            a++;
        }
        else
        {
            answer += toupper(s[i]);
            a++;
        }
    }

    return answer;
}