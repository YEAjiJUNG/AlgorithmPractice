#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    int answer = s.size();

    if (s.size() == 1)
        return 1;

    for (int i = 1; i <= s.size() / 2; i++)
    {
        int count = 1;
        string f = s.substr(0, i);
        string cmp, cp;

        for (int j = i; j < s.size(); j += i)
        {
            cmp = s.substr(j, i);

            if (f.compare(cmp) == 0)
            {
                count++;
            }
            else
            {
                if (count == 1)
                {
                    cp += f;
                    f = cmp;
                }
                else
                {
                    cp += to_string(count) + f;
                    f = cmp;
                    count = 1;
                }
            }

            if (j + i >= s.size())
            {
                if (count == 1)
                {
                    cp += s.substr(j);
                    break;
                }
                else
                {
                    cp += to_string(count) + f;
                    break;
                }
            }
        }
        answer = answer > cp.size() ? cp.size() : answer;
    }

    return answer;
}