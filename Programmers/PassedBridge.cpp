#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    int sum = 0;
    int index = 0;
    queue<int> q;

    while(1){
        time++;
        if(q.size() == bridge_length){
            sum -= q.front();
            q.pop();
        }
        if(sum + truck_weights[index] <= weight){
            if(index == truck_weights.size()-1){
                time += bridge_length;
                break;
            }

            q.push(truck_weights[index]);
            sum += truck_weights[index];
            index++;
        }
        else{
            q.push(0);
        }
        
    }
    return time;
}