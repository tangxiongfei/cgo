//
// Created by fly on 19-11-8.
//
#include <string>

#ifndef TORCH_MY_BUFFER_H
#define TORCH_MY_BUFFER_H

class MyBuffer {
    std::string* s_;
public:
    MyBuffer(int size) {
        this->s_ = new std::string(size, char('\0'));
    }
    ~MyBuffer() {
        delete this->s_;
    }

public:
    int Size() const {
        return this->s_->size();
    }

public:
    char* Data() {
        return (char*)this->s_->data();
    }
};

#endif //TORCH_MY_BUFFER_H
