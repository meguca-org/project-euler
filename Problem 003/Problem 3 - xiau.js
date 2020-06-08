var primeNum = 600851475143;
var i = 2;

while(i < primeNum) {
    if (primeNum%i ==0) {primeNum = primeNum / i;}
    i++;
}
document.write(primeNum);