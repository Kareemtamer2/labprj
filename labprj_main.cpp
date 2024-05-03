#include "products.h"
#include "checkout.h"
#include "login.h"
using namespace std;
int main()
{
    Technology t1;
    Products p1;
    //login_class l1;
    checkout<Products*> c1;
    Technology phone(150,"Iphone",30,"15/11/2024","SmartPhone");
    Technology watch(90,"AppleWatch",10,"15/10/2024","SmartWatch");
    t1.addTech(phone);
    t1.addTech(watch);
    t1.print();
    p1.print();
    // c1.add_cart(&phone);
    // c1.add_cart(&watch);
    // c1.print_cart();
}