## C++大气编程

数据一定放在private里。



header file防卫式声明

```cpp
#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

#endif
```





构造函数初始列initialization list

使用第二列的方式初始化，能用就用。

```c++
complex (double r = 0, double i = 0)
    : re (r), im (i)
{}
```



const member functions

const表示该函数不改变对象成员变量的值，应加尽加。否则const对象无法调用非const方法。

```cpp
double real () const { return re; }
```



参数传递 & 返回值传递

尽量都使用pass/return by reference (to const)。

注意：返回新创建的local variable的时候不能返回reference，必须返回value。