//프로그래머스_Level1_정수 내림차순으로 배치하기

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    long long answer = 0;
    string a = to_string(n);

    sort(a.begin(), a.end(),greater<char>()); //greater - 내림차순

    answer = stoll(a); // string을 long long 으로 바꿔줌

    return answer;
}