//���α׷��ӽ�_Level1_���ڼ��ڼ��ڼ��ڼ��ڼ�?

#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
    string answer = "";
    int i;

    for (i = 0; i < n/2; i++)
    {
        answer += "����";
    }
    if (n % 2 == 1)
    {
        answer += "��";
    }

    return answer;
}