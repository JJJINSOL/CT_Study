//프로그래머스_Level1_최대공약수와 최소공배수

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> answer;
    int a, b, num = 0;

    a = n;
    b = m;

    //유클리드 호제법
    //최대 공약수
    while (b != 0)
    {
        num = a % b;
        a = b;
        b = num;
    }
    answer.push_back(a);

    //최소 공배수 = n * m / 최대공약수 (n * m = 최소공배수 * 최대공약수)
    answer.push_back(n * m / a);

    return answer;
}