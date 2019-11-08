//
// Created by fly on 19-11-8.
//

#include "my_buffer.h"

extern "C" {
#include "my_buffer_capi.h"
}

handle NewMyBuffer(int size) {
    return new MyBuffer(size);
}

void DeleteMyBuffer(handle p) {
    delete static_cast<MyBuffer*>(p);
}
char* MyBuffer_Data(handle p) {
    return static_cast<MyBuffer*>(p)->Data();
}
int MyBuffer_Size(handle p) {
    return static_cast<MyBuffer*>(p)->Size();
}