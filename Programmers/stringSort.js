
var k;
function compare(a, b){
    if(a[k] != b[k]) return a[k] < b[k];
    else return a < b;

}

function solution(strings, n) {

    k = n;
    sort(strings.begin(), strings.end(), compare);

    return strings;
}