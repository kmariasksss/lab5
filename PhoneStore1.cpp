#include "PhoneStore1.h"
#include "PhoneStore2.h"
#include <stdexcept>

int main()
{
    phone b1 = phone("Iphone", "11", 22000);
    phone b2 = phone("Iphone", "Xr", 12000);
    phone b3 = phone("Iphone", "13", 34000);

    phonestore PhoneStore = phonestore("PhoneStore");
    PhoneStore += b1;
    PhoneStore += b2;
    PhoneStore += b3;

    std::cout << "Phones in shop: \n";
    std::cout << PhoneStore;
    PhoneStore.showTopByPrice();
   

    return 0;
}
