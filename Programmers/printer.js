function solution(priorities, location) {
    var answer = 0;
    var index = location;

    while(priorities.length > 0){
        if(priorities.some(num => num > priorities[0])){
            priorities.push(priorities[0]);
            priorities.shift(priorities[0]);
            
            if(index === 0){
                index = index + priorities.length - 1;
            }
            else{
                index -= 1;
            }
        }
        else
        {
            priorities.shift(priorities[0]);
            answer += 1;

            if(index === 0){
                break;
            }
            else{
                index -= 1;
            }
        }

    }

    
    return answer;
}