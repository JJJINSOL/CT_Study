//���α׷��ӽ�_Level1_�ڿ��� ������ �迭�� �����

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