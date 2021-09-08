package main

/*
#include "hello.h"
*/
import "C"

func main() {
	C.HelloC(C.CString("Hello, CGO CXX"))
}
