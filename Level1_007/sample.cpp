//���α׷��ӽ�_Level1_�ִ������� �ּҰ����

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;
    int a, b, num = 0;

    a = n;
    b = m;

    //��Ŭ���� ȣ����
    //�ִ� �����
    while (b != 0)
    {
        num = a % b;
        a = b;
        b = num;
    }
    answer.push_back(a);

    //�ּ� ����� = n * m / �ִ����� (n * m = �ּҰ���� * �ִ�����)
    answer.push_back(n * m / a);

    return answer;
}