var productFinal = 0;
for (let i = 999; i >= 100; i--) {
    for (let j = 999; j >= 100; j--) {
        var product = i*j;
        var productStr = product.toString();
        if ((productStr.charAt(0) == productStr.charAt(5)) && (productStr.charAt(1) == productStr.charAt(4)) && (productStr.charAt(2) == productStr.charAt(3))) {
            productFinal = (product>productFinal) ? product : productFinal;
        }
    }
}
document.write(productFinal);