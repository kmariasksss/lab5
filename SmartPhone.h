
#include <iostream>
#include <string>

using namespace std;

class SmartPhone {

public:
    SmartPhone(int idNum, int price, string internal, string serialNum, string powerSource);

    int getId();
    int getPrice();
    string getInternal();
    string getSerialNum();
    string getPowerSource();

    void setID(int id);
    void setPrice(int price);
    void setInternal(string internal);
    void setSerialNum(string sNum);
    void setPowerSource(string pSrc);
    void print();

private:
    int idNum;
    int price;
    string internal;
    string serialNum;
    string powerSource;
};
