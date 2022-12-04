#include "SmartPhone.h"

using namespace std;

SmartPhone::SmartPhone(int idNum, int price, string internal, string serialNum, string powerSource) {
    this->idNum = idNum;
    this->price = price;
    this->internal = internal;
    this->serialNum = serialNum;
    this->powerSource = powerSource;
}

int SmartPhone::getId() {
    return this->idNum;
}

int SmartPhone::getPrice() {
    return this->price;
}

string SmartPhone::getInternal() {
    return this->internal;
}

string SmartPhone::getSerialNum() {
    return this->serialNum;
}

string SmartPhone::getPowerSource() {
    return this->powerSource;
}


void SmartPhone::setID(int id) {
    this->idNum = id;
}

void SmartPhone::setPrice(int price) {
    this->price = price;
}

void SmartPhone::setInternal(string internal) {
    this->internal = internal;
}
void SmartPhone::setSerialNum(string sNum) {
    this->serialNum = sNum;
}

void SmartPhone::setPowerSource(string pSrc) {
    this->powerSource = pSrc;
}

void SmartPhone::print() {
    cout << "This SmartPhone::" << endl;
    cout << "\tId #: \t\t" << idNum << endl;
    cout << "\tPrice: \t\t" << price << endl;
    cout << "\tInternal: \t\t" << internal << endl;
    cout << "\tSerial #: \t" << serialNum << endl;
    cout << "\tPower Source: \t" << powerSource << endl;
}