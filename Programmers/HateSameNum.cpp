
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int index = 0;
    int current = index;

    while(index < arr.size()){
        if(arr[index] == arr[current]){
            index++;
        }
        else{
            answer.push_back(arr[current]);
            current = index;
            index++;
        }
    }
    if(answer.size() == 0 || answer.back() != arr.back()){
        answer.push_back(arr.back());
    }

    return answer;
}
