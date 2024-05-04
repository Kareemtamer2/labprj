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
   void add_cart(T prod)
   {
        cart.push_back(prod);
   }
   void print_cart()
   {
        for(int i=0;i<cart.size();i++)
        {
            total=total+cart[i]->price;
            std::cout<<cart[i]->name<<" "<<cart[i]->price<<std::endl;
        }
        std::cout<<"The Cart Total: "<<total;
   }
};