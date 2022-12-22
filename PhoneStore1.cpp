#include "PhoneStore1.h"
#include "PhoneStore2.h"
#include <stdexcept>

int main()
{
    Phone b1 = Phone("Iphone", "11", 22000);
    Phone b2 = Phone("Iphone", "Xr", 12000);
    Phone b3 = Phone("Iphone", "13", 34000);

    Phonestore PhoneStore = Phonestore("PhoneStore");
    PhoneStore += b1;
    PhoneStore += b2;
    PhoneStore += b3;

    std::cout << "Phones in shop: \n";
    std::cout << PhoneStore;
    PhoneStore.showTopByPrice();
   

    return 0;
}
