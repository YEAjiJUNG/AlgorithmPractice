#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int arr3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    for(int i = 0; i < answers.size(); i++){
        if(answers[i] == arr1[i % 5]){
            cnt1++;
        }
        if(answers[i] == arr2[i % 8]){
            cnt2++;
        }
        if(answers[i] == arr3[i % 10]){
            cnt3++;
        }
    }
    if(cnt2 < cnt1 && cnt3 < cnt1){
        answer.push_back(1);
    }
    else if(cnt1 < cnt2 && cnt3 < cnt2){
        answer.push_back(2);
    }
    else if(cnt1 < cnt3 && cnt2 < cnt3){
        answer.push_back(3);
    }
    else if(cnt1 == cnt2 && cnt1 != cnt3){
        answer.push_back(1);
        answer.push_back(2);
    }
    else if(cnt1 == cnt3 && cnt1 != cnt2){
        answer.push_back(1);
        answer.push_back(3);
    }
    else if(cnt2 == cnt3 && cnt2 != cnt1){
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(cnt1 == cnt2 && cnt2 == cnt3){
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    return answer;
}