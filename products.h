#include<iostream>
#include <string>
#include <type_traits>
#include <vector>
class Products
{
    protected:
    int quantity;
    std::vector<Products* >AllProd;
    public:
    double price;
    std::string name;
    Products(const double p,const std::string n,const int quant):price(p),name(n),quantity(quant){}
    Products(){}
   virtual void show()
    {
        std::cout<<"price: "<<price<<std::endl;
        std::cout<<"name: "<<name<<std::endl;
    }
    void add(Products* prod)
    {
       AllProd.push_back(prod);
    }
    void print()
    {
        std::cout<<"All Products: "<<std::endl;
        for(int i=0;i<AllProd.size();++i)
        {
            std::cout<<i+1<<": "<<AllProd[i]->name<<std::endl;
        }
    }
};
class Technology :public Products
{
    private:
    std::string warranty, type;
    std::vector<Technology> TechProd;
    public:
    Technology(double p,std::string n,int quant ,std::string warranty,std::string type): Products(p,n,quant),warranty(warranty),type(type){}
    Technology ()=default; 
    void show () override
    {
        std::cout<<"Warranty: "<<warranty<<std::endl;
        std::cout<<"Type: "<<type<<std::endl;
        Products::show();
    }
   void addTech ( Technology prod)
    {
        TechProd.push_back(prod);
        AllProd.push_back(&prod);
    }
    void print()
    {
        std::cout<<"All Technology Products: "<<std::endl;
        for(int i=0;i<TechProd.size();++i)
        {
            std::cout<<i+1<<": "<<TechProd.at(i).name<<" "<<TechProd.at(i).price<<std::endl;
        }
    }
};
class Food :public Products
{
    private:
    std::string expiry,type;
    int calories;
    std::vector<Food> FoodProd;
    public:
    Food(double p,const std::string n, int quant, std::string expiry, std::string type, int calor):Products(p,n,quant),expiry(expiry),type(type),calories(calor)
    {}
    Food(){}
    void show() override
    {
        std::cout<<"Type: "<<type<<std::endl;
        std::cout<<"Expiry Date: "<<expiry<<std::endl;
        std::cout<<"Calories: "<<calories<<std::endl;
        Products::show();
    }
    void AddFood (Food prod)
    {
        FoodProd.push_back(prod);
        AllProd.push_back(&prod);
    }
    void print()
    {
        std::cout<<"All Food Products: "<<std::endl;
        for(int i=0;i<FoodProd.size();++i)
        {
            std::cout<<i<<": "<<FoodProd.at(i).name<<" "<<FoodProd[i].price<<std::endl;
        }
    }
};
class Drink :public Products
{
    private:
    int calories, ml;
    std::string type;
    std::vector<Drink> DrinkProd;
    public:
    Drink(double p,std::string n, int quant,std::string type, int calor, int size):Products(p,n,quant),type(type),calories(calor),ml(size)
    {}
    Drink(){}
    void show() override 
    {
        std::cout<<"Type: "<<type<<std::endl;
        std::cout<<"Size: "<<ml<<std::endl;
        std::cout<<"Calories: "<<calories<<std::endl;
        Products::show();
    }
    void AddDrink (Drink prod)
    {
        DrinkProd.push_back(prod);
       AllProd.push_back(&prod);
    }
    void print()
    {
        std::cout<<"All Drink Products: "<<std::endl;
        for(int i=0;i<DrinkProd.size();++i)
        {
            std::cout<<i<<": "<<DrinkProd[i].name<<" "<<DrinkProd[i].price<<std::endl;
        }
    }

};