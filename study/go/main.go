package main
import(
    "fmt"
)

func repeatMe(words ...string){
    fmt.Println(words)
}

func main(){
    repeatMe("aa","bb", "cc", "dd", "ee")
}
