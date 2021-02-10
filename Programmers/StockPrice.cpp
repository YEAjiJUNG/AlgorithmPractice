#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    for(int i = 0; i < prices.size()-1; i++){
        for(int j = i+1; j < prices.size(); j++){
            if(prices[i] <= prices[j]){
                if(j == prices.size()-1){
                    answer.push_back(j-i);
                }
                else{
                    continue;
                }
            }
            else{
                answer.push_back(j-i);
                break;
            }
        }
    }
    answer.push_back(0);


    return answer;
}