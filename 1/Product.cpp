#include "Product.h"
#include <string>

Product::Product(unsigned id, unsigned count)
    : _id(id)
    , _count(count)
{}

unsigned Product::id() const { return _id; }

unsigned Product::count() const { return _count; }

void Product::set_count(unsigned count) { _count = count; }
