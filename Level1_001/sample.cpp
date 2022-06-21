#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;

    vector<int>::iterator iter = numbers.begin();
    vector<int>::iterator i;
    vector<int>::iterator j;

    for (iter; iter != numbers.end()-1; iter++)
    {
        i = iter + 1;
        for (i; i != numbers.end(); i++)
        {
            int sum = *iter + *i;
            if (answer.empty())
            {
                answer.push_back(sum);
            }
            else
            {
                for (j = answer.begin();j!=answer.end();j++)
                {
                    if (*j == sum)
                    {
                        break;
                    }
                    else if(sum < *j)
                    {
                        answer.insert(j,1,sum);
                    }
                }
            }
        }

    }

    return answer;
}