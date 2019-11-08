//
// Created by fly on 19-11-8.
//

#ifndef TORCH_MY_BUFFER_CAPI_H
#define TORCH_MY_BUFFER_CAPI_H

typedef void* handle; // 这里定义一下，然后才能在go里面使用这个数据类型

handle NewMyBuffer(int size);
void DeleteMyBuffer(handle);

char* MyBuffer_Data(handle);
int MyBuffer_Size(handle);

#endif //TORCH_MY_BUFFER_CAPI_H

/*
 * class 的声明和定义
 *
 * // student.h 进行类的声明
 *
 * class Student {
 *      Student(std::string name, int age); // 和类名相同的函数就是构造函数
        ~Student(){} // 析构函数
 *      void display();
 * private:
 *      int num;
 *      char name[20];
 *      char sex;
 * }
 *
 *
 * // student.cpp 进行类的定义
 *
 * #include "student.h"
 * void Student::display(){
 *      count << "num:" <<
 * }
 *
 * Student::Student(std::string name, int age)
 *  : name_(name),
 *    age_(age) {}
 *
 * // main.cpp 进行类的调用
 *
 * #include
 *
 * int main() {
 *      Student stud;
 *      stud.display();
 *      return 0;
 * }
 *
 */