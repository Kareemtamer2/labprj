#ifndef PRODUCTS_H
#define PRODUCTS_H

#include<iostream>
#include <string>
#include <vector>

class products
{
protected:
    int quantity;
    std::vector<products* > all_prod;
    double price;
    std::string name;
public:

    products(double p,std::string n,int quant):price(p),name(n),quantity(quant){}
    products(){}
    virtual void show();
    void add(products* prod);
    void print();

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

#endif // PRODUCTS_H
