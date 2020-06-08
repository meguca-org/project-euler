package main
import (
    "fmt"
    "strconv"
)

func isPalindrome(num int) bool {
    str := strconv.Itoa(num)

    for i := 0; i <= len(str) / 2; i++ {
        if str[i] != str[len(str) - 1 - i] {
            return false
        }
    }

    return true
}

func main() {
    rv := 0

    for i := 999; i > 0; i-- {
        for j := 999; j > 0; j-- {
            ij := i * j
            if isPalindrome(ij) && ij > rv {
                rv = ij
            }
        }
    }

    fmt.Println("%v", rv)
}
