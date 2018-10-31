package main

import "fmt"
import "time"

func main() {

	t1 := time.Now() //记录开始运行时间

	var count int64
	var val int64
	var i int64
	count = 0
	val = int64(1000000000)

	for i = 0; i < val; i++ {
		count += i
	}

	elapsed := time.Since(t1)
	fmt.Printf("最后i:%d\n 总共:%d\n \n时间", i, count, elapsed)

}
