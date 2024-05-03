#include "checkout.h"

template<typename T>
void checkout<T>::add_cart(T prod){
    cart.push_back(prod);
}

template<typename T>
void checkout<T>::print_cart(){
    for(int i=0;i<cart.size();i++)
    {
        total=total+cart[i]->price;
        std::cout<<cart[i]->name<<" "<<cart[i]->price<<std::endl;
    }
    std::cout<<"The Cart Total: "<<total;
}
