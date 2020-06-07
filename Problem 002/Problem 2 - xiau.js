var fibLast = 1;
var fibCurr = 2;
var upperBound = 4000000;
var countVal = 2;
while (fibCurr < upperBound) {
    var temp = fibLast;
    fibLast = fibCurr;
    fibCurr += temp;
    countVal += (fibCurr%2==0) ? fibCurr : 0;
}
document.write(countVal);