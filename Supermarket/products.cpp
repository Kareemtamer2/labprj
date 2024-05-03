#include "products.h"
#include <iostream>
using namespace std;

void products::show(){
    std::cout<<"price: "<<price<<std::endl;
    std::cout<<"name: "<<name<<std::endl;
}

void products::add(products* prod){
    all_prod.push_back(prod);
}

void products::print(){
    std::cout<<"All Products: "<<std::endl;
    for(int i = 0; i < all_prod.size(); ++i)
    {
        std::cout<<i+1<<": "<<all_prod[i]->name<<std::endl;
    }
}

