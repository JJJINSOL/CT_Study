//프로그래머스_Level1_시저 암호

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    string answer = "";
    string temp = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            temp = ' ';
        }
        else if ((s[i] + n > 122) || (s[i] <= 90 && s[i] + n > 90))
        {
            temp = s[i] + n - 26;
        }
        else
        {
            temp = s[i] + n;
        }
        answer += temp;
    }

    return answer;
}