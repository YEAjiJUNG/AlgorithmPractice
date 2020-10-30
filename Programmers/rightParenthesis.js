function solution(s){
    var answer = true;
    const stack = [];

    for(let i = 0; i < s.length; i++){
        if(stack.length === 0){
            stack.push(s[i]);
            continue;
        }
        if(stack[stack.length - 1] === "(" && s[i] === ")"){
            stack.pop();
        }
        else{
            stack.push(s[i]);
        }
    }

    if(stack.length === 0) return true;

    return false;

}