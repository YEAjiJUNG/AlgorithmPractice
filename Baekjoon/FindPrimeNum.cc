#include <string>
#include <algorithm>
 
using namespace std;
 
int solution(string numbers) {
    int answer = 0;  
    sort(numbers.begin(), numbers.end(), greater<int>());
    int num = atoi(numbers.c_str());
    
    long long * p = new long long[num + 3];
    
    for (int i = 2; i < sqrt(num); i++) {   
        if (!p[i]) {
            for (int j = i * i; j <= num; j += i) {
                p[j] = 1;
            }
        }
    }
    
    for(int i  = 2; i <= num; i++){
        if(p[i] == 0){       
            int val = i;
            int j;
            char temp[8], orit[8];
            numbers.copy(temp, sizeof temp - 1);   
            temp[numbers.size()] = '\0';
            
            for(j = 0; j < 8; j++){
                orit[j] = (val % 10) + '0';        
                val /= 10;
                if(val == 0)
                    break;
            }
            
            int count = -1;
            for(int x = 0; x <= j; x++){
                for(int y = 0; y < numbers.size(); y++){
                    if(orit[x] == temp[y]){     
                        temp[y] = -1;   
                        count++;
                        break;
                    }
                }
            }
            if(count == j)       
                answer++;
        }
    }
    delete[] p;
    return answer;
}
