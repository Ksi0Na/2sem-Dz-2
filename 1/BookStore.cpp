#include "BookStore.h"
#include "book.h"
#include "pen.h"

#include <iostream>

BookStore::BookStore()
    : _products() // Вызов конструктора по умолчанию для вектора
{
    _products.push_back(new Book(1, 10, "Book 1", "Author 1", 2011,
                                 "Publisher 1", 2017));
    _products.push_back(new Book(2, 10, "Book 2", "Author 1", 2012,
                                 "Publisher 1", 2017));
    _products.push_back(new Book(3, 10, "Book 3", "Author 1", 2013,
                                 "Publisher 1", 2017));
    _products.push_back(new Book(4, 10, "Book 4", "Author 2", 2000,
                                 "Publisher 1", 2017));
    _products.push_back(new Book(5, 10, "Book 5", "Author 2", 2001,
                                 "Publisher 2", 2017));
    _products.push_back(new Book(6, 10, "Book 6", "Author 3", 1921,
                                 "Publisher 2", 2017));
    _products.push_back(new Book(7, 10, "Book 7", "Author 3", 1922,
                                 "Publisher 2", 2017));
    _products.push_back(new Book(8, 10, "Book 8", "Author 3", 1923,
                                 "Publisher 2", 2017));
    _products.push_back(new Pen( 9, 100, "Erich Krause", "Blue"));
    _products.push_back(new Pen(10, 100, "Erich Krause", "Black"));
    _products.push_back(new Pen(11, 100, "Erich Krause", "Red"));
    _products.push_back(new Pen(12, 100, "Gamma", "Blue"));
    _products.push_back(new Pen(13, 100, "Gamma", "Black"));
    _products.push_back(new Pen(14, 100, "Gamma", "Red"));
}

BookStore::~BookStore()
{
    for (size_t i = 0; i < _products.size(); ++i)
    {
        delete _products[i];
    }
}

void BookStore::dump() const
{
    for (size_t i = 0; i < _products.size(); ++i)
    {
        cout << i << ") " << _products[i]->id()
             << " (" << _products[i]->count() << ") "
             << " " << _products[i]->type() << ": "
             << _products[i]->info() << endl;
    }
}
