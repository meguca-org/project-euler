let finalVar = -1;
let i = 20;

function isDividable(int) {
    for (let i = 1; i < 21; i++) {
        if (int%i > 0) { return false }
    }
    return true;
}

while (finalVar == -1) {
    finalVar = isDividable(i) ? i : finalVar;
    i += 20;
}


document.write(finalVar);