#ifndef BOOK_H
#define BOOK_H

#include "Product.h"

class Book : public Product
{
public:
    Book(unsigned id, unsigned count,
         string name, string author, string publisher,
         unsigned short year, unsigned short publication_year);

    virtual string type() const = 0;
    virtual string info() const = 0;

private:
    string _name, _author, _publisher;
    unsigned short _year, _publication_year;
};

#endif // BOOK_H
