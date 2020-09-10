#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for(int l = 0; l < commands.size(); l++)
    {
        vector<int> subArray;

        int i = commands[l][0];
        int j = commands[l][1];
        int k = commands[l][2];
        // array 복사
        // 복사한 어레이를 솔팅 (i, j) 그 다음에 k번째 숫자를 answer에 push
        
        subArray.assign(array.begin() + i-1, array.begin() + j);

        sort(subArray.begin(), subArray.end());
        
        answer.push_back(subArray[k-1]);
    }

    return answer;
}