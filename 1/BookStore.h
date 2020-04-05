#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <vector>

#include "Product.h"

using namespace std;
class BookStore
{
public:
    BookStore();

    void dump() const;

    ~BookStore();

private:
    vector<Product *> _products;
};

#endif // BOOKSTORE_H
