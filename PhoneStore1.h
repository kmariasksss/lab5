#pragma once
#ifndef PHONESTORE_H
#define PHONESTORE_H
#include "PhoneStore2.h"
#include <string>
#include <vector>
#include <algorithm> 

class phonestore {

public:

    std::string  _name;
    std::vector <phone> _phones;

    phonestore(std::string const& name) : _name(name) {};

    std::string name() const {
        return _name;
    }

    phonestore& operator+= (phone const& new_phone)
    {
        _phones.push_back(new_phone);
        return *this;
    }

    int count_books() const
    {
        return _phones.size();
    }

    void showTopByPrice() {
        std::cout << "TOP BY PRICE: \n";

        std::sort(_phones.begin(), _phones.end(), by_Price());

        showBooks();
    }

    void showBooks() {
        for (size_t i = 0; i < _phones.size(); i++)
            std::cout << _phones[i] << ' ' << '\n';
    }

    struct by_Price {
        bool operator()(phone const& a, phone const& b) const {
            return a.price() > b.price();
        }
    };

   

    struct compare
    {
        std::string key;
        compare(std::string& title) : key(title) {}

        bool operator()(phone const& b) {
            return (b.mark() == key);
        }
    };

    friend std::ostream& operator<< (std::ostream& os, phonestore const& c)
    {
        for (size_t i = 0; i < c._phones.size(); i++)
            os << c._phones[i] << ' ' << '\n';
        return os;
    }
};

#endif /*PHONESTORE1_H*/