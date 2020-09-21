#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> index;

    for(int i = 0; i < board[0].size(); i++){
        for(int j = 0; j < board.size(); j++){
            if(board[j][i] != 0){
                index.push_back(j);
                break;
            }
        }
    }

    vector<int> basket;
    int doll;

    for(int i = 0; i < moves.size(); i++){
        if (index[moves[i]-1] == board.size()) continue;
        doll = board[index[moves[i]-1]++][moves[i]-1];
        if(basket.size() > 0 && basket.back() == doll){
            answer += 2;
            basket.pop_back();
        }
        else{
            basket.push_back(doll);
        }
    }
    
    return answer;
}