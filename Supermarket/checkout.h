#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <iostream>
#include <vector>
template <typename T>
class checkout
{
private:
    std::vector<T> cart;
    double total=0;
public:
    checkout(){}
    void add_cart(T prod);
    void print_cart();
};

#endif // CHECKOUT_H
