//���α׷��ӽ�_Level1_����� ��

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;

    //�ݺ��� ���� 1(0������ �ȵ�) ~ n(�ڱ� �ڽ��� ���ڱ��� ������)
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
        }
    }

    return answer;
}