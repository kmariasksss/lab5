#pragma once
#ifndef PHONESTORE_H
#define PHONESTORE_H
#include "PhoneStore2.h"
#include <string>
#include <vector>
#include <algorithm> 

class Phonestore {

public:

    std::string  name;
    std::vector <phone> phones;

    Phonestore(std::string const& name) : name(name) {};

    std::string name() const {
        return name;
    }

    Phonestore& operator+= (phone const& new_phone)
    {
        phones.push_back(new_phone);
        return *this;
    }

    int count_books() const
    {
        return phones.size();
    }

    void showTopByPrice() {
        std::cout << "TOP BY PRICE: \n";

        std::sort(phones.begin(), phones.end(), By_Price());

        showBooks();
    }

    void showBooks() {
        for (size_t i = 0; i < phones.size(); i++)
            std::cout << phones[i] << ' ' << '\n';
    }

    struct By_Price {
        bool operator()(phone const& a, phone const& b) const {
            return a.price() > b.price();
        }
    };

   

    struct Compare
    {
        std::string key;
        compare(std::string& title) : key(title) {}

        bool operator()(phone const& b) {
            return (b.mark() == key);
        }
    };

    friend std::ostream& operator<< (std::ostream& os, Phonestore const& c)
    {
        for (size_t i = 0; i < c.phones.size(); i++)
            os << c.phones[i] << ' ' << '\n';
        return os;
    }
};

#endif /*PHONESTORE1_H*/