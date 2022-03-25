//
// Created by Parti on 2020/12/12.
//

#ifndef LEARNMODERNCPP_AUTOANDDECLTYPE_H
#define LEARNMODERNCPP_AUTOANDDECLTYPE_H

#include <iostream>

class A {
public:
    static int get() {
        return 100;
    }
};

class B {
public:
    static const char *get() {
        return "http://c.biancheng.net/cplus/";
    }
};

template<typename T>
void func() {
    auto val = T::get();
    std::cout << val << std::endl;
}


#endif//LEARNMODERNCPP_AUTOANDDECLTYPE_H
