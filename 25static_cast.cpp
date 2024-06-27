//static_cast   很不安全 具体见笔记
#include <iostream>
class Base {
public:
    virtual void show() { std::cout << "Base class\n"; }
};
class Derived : public Base {
public:
    void show() override { std::cout << "Derived class\n"; }
};
int main() {
    int i = 10;
    double d = static_cast<double>(i);
    std::cout << "Double: " << d << "\n";

    void* ptr = &i;
    int* ip = static_cast<int*>(ptr);
    std::cout << "Int pointer: " << *ip << "\n";

    Base* b = new Derived;
    Derived* dp = static_cast<Derived*>(b);
    dp->show();

    enum Color { RED, GREEN, BLUE };
    Color c = static_cast<Color>(2);
    std::cout << "Color: " << c << "\n";

    return 0;
}


