#include <string>
#include <vector>

using namespace std;

//프로그래머스_Level1_핸드폰 번호 가리기 

string solution(string phone_number)
{
    string answer = "";
    string base = "*";
    int i = 0;

    for (i; i < phone_number.size() - 4; i++)
    {
        answer += base;
    }
    for (i; i < phone_number.size(); i++)
    {
        answer += phone_number.at(i);
    }
    return answer;
}