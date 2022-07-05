//프로그래머스_Level1_수박수박수박수박수박수?

#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
    string answer = "";
    int i;

    for (i = 0; i < n/2; i++)
    {
        answer += "수박";
    }
    if (n % 2 == 1)
    {
        answer += "수";
    }

    return answer;
}