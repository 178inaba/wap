package wap

/*
extern void wap(void);
*/
import "C"
import "fmt"

type word int

const (
	進捗 word = iota
	どう
	です
	か
)

//export printWord
func printWord(num C.int) C.int {
	fmt.Print(word(num))

	return num
}

// Wap is "what about progress?"
func Wap() {
	C.wap()
}
