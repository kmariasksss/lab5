#ifndef PHONESTORE2_H
#define PHONESTORE2_H
#include <string>
#include <iostream>

class phone
{
    std::string _mark;
    std::string _series;
    double _price;

public:
    phone(std::string const& mark, std::string const& series, double const& price) :_mark(mark), _series(series), _price(price) {};

    std::string mark() const
    {
        return _mark;
    }

    std::string series() const
    {
        return _series;
    }

    double price() const
    {
        return _price;
    }

    

};

inline std::ostream& operator <<(std::ostream& os, phone const& b) {
    return os << "Mark: " << b.mark() << "; Series: " << b.series() << "; Price: " << b.price() << std::endl;
    return os;
}

#endif /*BOOK_H*/#pragma once
