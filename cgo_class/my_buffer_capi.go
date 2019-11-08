package main

/*
#cgo CXXFLAGS: -std=c++11

#include "my_buffer_capi.h"
*/
import "C"
import "unsafe"

func cgo_NewMyBuffer(size int) (C.handle) {
    p := C.NewMyBuffer(C.int(size))
    return p
}

func cgo_DeleteMyBuffer(p C.handle) {
	C.DeleteMyBuffer(p)
}

func cgo_MyBuffer_Data(p C.handle) *C.char {
	return C.MyBuffer_Data(p)
}

func cgo_MyBuffer_Size(p C.handle) C.int {
	return C.MyBuffer_Size(p)
}

type MyBuffer struct {
    cptr C.handle
}

func NewMyBuffer(size int) *MyBuffer {
    return &MyBuffer{
        cptr: cgo_NewMyBuffer(size),
    }
}

func (p *MyBuffer) Delete(){
    cgo_DeleteMyBuffer(p.cptr)
}

func (p *MyBuffer) Data() []byte {
    data := cgo_MyBuffer_Data(p.cptr)
    size := cgo_MyBuffer_Size(p.cptr)

    return ((*[1 << 31]byte)(unsafe.Pointer(data)))[0:int(size):int(size)]
}