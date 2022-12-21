#ifndef PHONESTORE2_H
#define PHONESTORE2_H
#include <string>
#include <iostream>

class phone
{
    std::string mark;
    std::string series;
    double price;

public:
    phone(std::string const& mark, std::string const& series, double const& price) :mark(mark), series(series), price(price) {};

    std::string mark() const
    {
        return mark;
    }

    std::string series() const
    {
        return series;
    }

    double price() const
    {
        return price;
    }

    

};

inline std::ostream& operator <<(std::ostream& os, Phone const& b) {
    return os << "Mark: " << b.mark() << "; Series: " << b.series() << "; Price: " << b.price() << std::endl;
    return os;
}

#endif /*BOOK_H*/#pragma once
