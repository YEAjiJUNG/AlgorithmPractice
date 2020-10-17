#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    int max = 0;

    vector<int> v1;
    vector<int> v2;

    sort(numbers.begin(), numbers.end(), greater<int>());
    
    max = stoi(numbers);

    v1.resize(max+1);

    for(int i = 2; i <= max; i++){
        if(v1[i] == 1)
        continue;
        for(int j = i*2; j <= max; j += i){
            v1[j] = 1;
        }
    }

    for(int i = 2; i <= max; i++){
        if(v1[i] != 1){
            v2.push_back(i);
        }
    }

    for(int i = 0; i < v2.size(); i++){
        string str = to_string(v2[i]);
        bool check2 = false;
        string tmp = numbers;
        for(int j = 0; j < str.size(); j++){
            bool check = false;
            for(int k = 0; k < tmp.size(); k++){
                if(str[j] == tmp[k]) {
                    check = true;
                    tmp[k] = '-';  
                    break;
                }
            }
            if (!check) break;
            if (j == str.size() - 1) check2 = true;
        }
        if (check2) {
            answer++;
        }
    }
       
    return answer;
}