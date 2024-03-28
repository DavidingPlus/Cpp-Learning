/*
 * Copyright (c) 2023 白忠建 电子科技大学信息与软件工程学院
 * 现代C++程序设计课程源码及其构建系统 is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 */


//bzj^_^
//complex-add.cpp

#include <iostream>
#include <format>

class complex {
private:
    double real, imag;

public:
    complex(double r = 0, double i = 0) : real(r), imag(i) {}

    friend complex operator+(const complex &a, const complex &b);
    friend void print(const complex &c);
};

void print(const complex &c) {
    std::cout << std::format("{:.2f} + i{:.2f}\n", c.real, c.imag);
}

complex operator+(const complex &a, const complex &b) {
    return complex{a.real + b.real, a.imag + b.imag};
}

int main() {
    complex c1{1.2, 2.3}, c2{3.4, 4.5}, c3;
    c3 = c1 + c2;
    print(c3);

    return 0;
}
