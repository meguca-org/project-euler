package main
import (
    "fmt"
    "math"
)

func isPrime (num int) bool {
    for i := 2; i < num; i++ {
        if num % i == 0 {
            return false;
        }
    }
    return true;
}

func main() {
    num := 600851475143

    for i := int(math.Sqrt(float64(num))); i > 1; i-- {
        if num % i == 0 && isPrime(i) {
            fmt.Printf("%v\n", i);
            break;
        }
    }
}
