#include <iostream>
#include "String.h"

int main() {
    String s1("hello");
    String s2("world");

    std::cout << s1 << std::endl; // hello
    std::cout << s2 << std::endl; // world

    String s3(s1);
    std::cout << s3 << std::endl; // hello

    s3 = s2;
    std::cout << s3 << std::endl; // world

    return 0;
}
