
function solution(n) {
    var answer = 0;
    let nbi = n.toString(2);
    let nbiCount = nbi.match(/1/g).length;

    while(true){
        n+=1;
        let nextbi = n.toString(2);
        let nextbiCount = nextbi.match(/1/g).length;
        if(nbiCount == nextbiCount){
            answer = n;
            break;
        }
    }

    return answer;
}