#include <string>
#include <vector>

using namespace std;

//���α׷��ӽ�_Level1_�ڵ��� ��ȣ ������ 

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