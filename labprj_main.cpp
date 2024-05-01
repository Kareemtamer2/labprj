#include "products.h"
#include "checkout.h"
using namespace std;
int main()
{
    technology t1;
    checkout<products*> c1;
    technology phone(150,"Iphone",30,"15/11/2024","SmartPhone");
    technology watch(90,"AppleWatch",10,"15/10/2024","SmartWatch");
    t1+=phone;
    t1+=watch;
    t1.print();
    p1.print();
    c1.add_cart(&phone);
    c1.add_cart(&watch);
    c1.print_cart();
}