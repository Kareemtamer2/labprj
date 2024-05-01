#include<iostream>
#include <string>
#include <type_traits>
#include <vector>
class products
{
    protected:
    int quantity;
    std::vector<products* > all_prod;
    public:
    double price;
    std::string name;
    products(double p,std::string n,int quant):price(p),name(n),quantity(quant){}
    products(){}
   virtual void show()
    {
        std::cout<<"price: "<<price<<std::endl;
        std::cout<<"name: "<<name<<std::endl;
    }
    void add(products* prod)
    {
        all_prod.push_back(prod);
    }
    void print()
    {
        std::cout<<"All Products: "<<std::endl;
        for(int i=0;i<all_prod.size();++i)
        {
            std::cout<<i+1<<": "<<all_prod[i]->name<<std::endl;
        }
    }
}p1;
class technology :public products
{
    private:
    std::string warranty, type;
    std::vector<technology> tech_prod;
    public:
    technology(double p,std::string n,int quant ,std::string warranty,std::string type): products(p,n,quant),warranty(warranty),type(type){}
    technology(){}
    void show ()
    {
        std::cout<<"Warranty: "<<warranty<<std::endl;
        std::cout<<"Type: "<<type<<std::endl;
        products::show();
    }
   void operator +=( technology prod)
    {
        tech_prod.push_back(prod);
        p1.add(&prod);
    }
    void print()
    {
        std::cout<<"All Technology Products: "<<std::endl;
        for(int i=0;i<tech_prod.size();++i)
        {
            std::cout<<i+1<<": "<<tech_prod.at(i).name<<" "<<tech_prod.at(i).price<<std::endl;
        }
    }
};
class food :public products
{
    private:
    std::string expiry,type;
    int calories;
    std::vector<food> food_prod;
    public:
    food(double p,std::string n, int quant, std::string expiry, std::string type, int calor):products(p,n,quant),expiry(expiry),type(type),calories(calor)
    {}
    food(){}
    void show()
    {
        std::cout<<"Type: "<<type<<std::endl;
        std::cout<<"Expiry Date: "<<expiry<<std::endl;
        std::cout<<"Calories: "<<calories<<std::endl;
        products::show();
    }
    void operator +=(food prod)
    {
        food_prod.push_back(prod);
        p1.add(&prod);
    }
    void print()
    {
        std::cout<<"All Food Products: "<<std::endl;
        for(int i=0;i<food_prod.size();++i)
        {
            std::cout<<i<<": "<<food_prod.at(i).name<<" "<<food_prod[i].price<<std::endl;
        }
    }
};
class drink :public products
{
    private:
    int calories, ml;
    std::string type;
    std::vector<drink> drink_prod;
    public:
    drink(double p,std::string n, int quant,std::string type, int calor, int size):products(p,n,quant),type(type),calories(calor),ml(size)
    {}
    drink(){}
    void show()
    {
        std::cout<<"Type: "<<type<<std::endl;
        std::cout<<"Size: "<<ml<<std::endl;
        std::cout<<"Calories: "<<calories<<std::endl;
        products::show();
    }
    void operator +=(drink prod)
    {
        drink_prod.push_back(prod);
        p1.add(&prod);
    }
    void print()
    {
        std::cout<<"All Technology Products: "<<std::endl;
        for(int i=0;i<drink_prod.size();++i)
        {
            std::cout<<i<<": "<<drink_prod[i].name<<" "<<drink_prod[i].price<<std::endl;
        }
    }

};
// template <typename T>
// class checkout 
// {
//    private: 
//    std::vector<T> cart;
//    double total=0;
//    public: 
//    checkout(){}
//    void add_cart(T prod)
//    {
//         cart.push_back(prod);
//    }
//    void print_cart()
//    {
//         for(int i=0;i<cart.size();i++)
//         {
//             total=total+cart[i]->price;
//             std::cout<<cart[i]->name<<" "<<cart[i]->price<<std::endl;
//         }
//         std::cout<<"The Cart Total: "<<total;
//    }
// };