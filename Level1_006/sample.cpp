//���α׷��ӽ�_Level1_�ݶ��� ����

#include <string>
#include <vector>

using namespace std;

int solution(int num) 
{
    int answer = 0;

    //int�� num�� long long ���� �ٲپ� ���� ������ (1 ~ 8,000,000) ������ �Ѿ�� ����� ����� �ȳ���
    long long a = num;
    while (answer < 500)
    {
        if (a == 1)
        {
            break;
        }
        if (a % 2 == 0)
        {
            a /= 2;
        }
        else
        {
            a = a * 3 + 1;
        }
            answer++;
        }

    if (answer == 500)
    {
        answer = -1;
    }

    return answer;
}