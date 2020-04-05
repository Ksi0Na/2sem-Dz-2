#ifndef STATIONERY_H
#define STATIONERY_H

#include "Product.h"
#include <string>

using namespace std;
class Stationery: public Product
{
public:
    Stationery(unsigned id, unsigned count,
               string maker);

    string maker() const;

    virtual string type() const = 0;
    virtual string info() const = 0;

private:
    string _maker;
};

#endif // STATIONERY_H
