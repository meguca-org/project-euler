var countVal = 0;
var countTo = 1000;
for (var i = 0; i < countTo; i++) {
    countVal += (i%3==0 ? i : (i%5==0 ? i : 0));
}
document.write(countVal);