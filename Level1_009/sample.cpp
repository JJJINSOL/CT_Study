//프로그래머스_Level1_제일 작은 수 제거하기

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int small = 0;

    for (int i = 1; i != arr.size(); i++)
    {
        if (arr[small] > arr[i])
        {
            small = i;
        }
    }
    arr.erase(arr.begin() + small);
    if (arr.empty())
    {
        answer.push_back(-1);
    }
    else
    {
        answer = arr;
    }
    return answer;
}