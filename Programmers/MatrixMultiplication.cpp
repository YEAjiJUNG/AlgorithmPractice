#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer(arr1.size(), vector<int>(arr2[0].size(), 0));
    int cnt = 0;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int l = 0; l < arr1[0].size(); l++)
        {
            for (int k = 0; k < arr2[0].size(); k++)
            {
                answer[i][k] += arr1[i][l] * arr2[l][k];
            }
        }
    }
    return answer;
}