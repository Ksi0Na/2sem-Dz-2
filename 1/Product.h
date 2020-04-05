#ifndef PRODUCT_H
#define PRODUCT_H

#include"BookStore.h"
#include <string>

using namespace std;
class Product: public BookStore
{
public:
    Product (unsigned id, unsigned count);

    unsigned id() const;

    unsigned count() const;
    void set_count(unsigned count);

    virtual string type() const = 0;
    virtual string info() const = 0;

private:
    unsigned _id;
    unsigned _count;
};

#endif // PRODUCT_H
